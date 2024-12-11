#ifndef NET_H
#define NET_H

#include <nlohmann/json.hpp>

using json = nlohmann::json;
using json_callback_t = std::function<void(const json&)>;

json net_fetch_payload();

struct request {
    bool complete;
    char recv_buffer[4096];
    int buffer_pos;
};

#endif