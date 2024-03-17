#include <iostream>
#include <string>
#include <memory>

struct connection {
    std::string ip;
    int port;
    connection(std::string ip_, int port_):ip(ip_), port(port_){ }
};

struct destination {
    std::string ip;
    int port;
    destination(std::string ip_, int port_):ip(ip_), port(port_){ }
};

