#include "../global.h"
#include "../transport.hpp"

int main(int argc, char* argv[])
{
    int rc = SE_OK;
    TransSocket clientSock;
    // set the port 
    clientSock.setAddress("localhost", 12345);
    // init the socket
    clientSock.initSocket();
    // connect
    rc = clientSock.Connect();
    assert(rc == SE_OK);
    // disable the small package to transport
    clientSock.disableNagle();

<<<<<<< HEAD
    std::string str(argv[1]);
    for (int i = 0;i < 100 &&clientSock.isConnected() ; ++i) {
        clientSock.Send(str.c_str(), str.length());
        if(i%9 == 0) {
            clientSock.Send("\n", 1);
        }
    }
    clientSock.Close();
=======
    std::string str = "nuasfdsag";
    clientSock.Send(str.c_str(), str.length());

    while(1){}
>>>>>>> 7535c29447e815055da4441a7d0ff502affbc14e
}