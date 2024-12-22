#include "net.hpp"
#include "lwip/apps/http_client.h"
#include "pico/async_context.h"
#include "pico/cyw43_arch.h"
#include "inky_dashboard.hpp"
#include "inky_interface.hpp"
#include <cstring>
#include <algorithm>
#include <vector>

static std::vector<std::uint8_t> recv_buffer;
static bool request_done = false;

static err_t internal_recv_fn(void *arg, struct altcp_pcb *pcb, struct pbuf *p, err_t err) {
    if (err != ERR_OK) {
        return err;
    }
    
    if (p == nullptr) {        
        return ERR_OK;
    }
    
    const char* data = (const char*)p->payload;
    size_t data_len = p->len;
    
    while (data_len > 0) {
        recv_buffer.push_back(*data);
        
        data += 1;
        data_len -= 1;
    }

    pbuf_free(p);
    return ERR_OK;
}

static void internal_result_fn(void *arg, httpc_result_t httpc_result, u32_t rx_content_len, u32_t srv_res, err_t err) {
   request_done = true;
}

json net_fetch_payload() {
    gpio_put(WIFI_LED, 1);

    request_done = false;

    auto context = cyw43_arch_async_context();

    httpc_connection_t settings;
    settings.result_fn = internal_result_fn;
    settings.headers_done_fn = nullptr;
    settings.use_proxy = 0;
    
    httpc_state_t *client_conn;
    async_context_acquire_lock_blocking(context);
    err_t err = httpc_get_file_dns(HOST, PORT, "/", &settings, internal_recv_fn, nullptr, &client_conn);
    async_context_release_lock(context);

    while(!request_done) {
        async_context_poll(context);
        async_context_wait_for_work_ms(context, 1000);
    }

    gpio_put(WIFI_LED, 0);

    return json::from_cbor(recv_buffer);
}