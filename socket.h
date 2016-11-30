#include <sys/socket.h>
#include <netinet/ip.h>

class Socket
{
    private:
        sockaddr_in local_adres{};
    public:
        Socket(const sockaddr_in& addres);
        ~Socket();
        
        void send_to(const Message& message, const sockadre_in& address);
        void receive_from(Message& message, sockaddr_in& addres);
};
