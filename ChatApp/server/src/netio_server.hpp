#pragma once
#include "netio_common.hpp"

namespace netio {
template<typename T>
class Server {
public:
    Server();
    ~Server()
    {
        Stop();
    };
    void Stop(){

    };
    bool Start(){

    };
    
    void WaitForConnection(){

    };

    // Create message type
    void SendMessageToAll(){

    };
    // Create message type
    void SendMessage(){
    
    };
private:
    std::shared_ptr<int32_t> m_ConnectionId;

};


} // namespace netio
