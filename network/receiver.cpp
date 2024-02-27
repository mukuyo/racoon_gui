#include "receiver.hpp"

Receiver::Receiver()
{
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Socket creation failed" << std::endl;
    }

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("224.5.23.2");
    servaddr.sin_port = htons(10020);

    mreq.imr_multiaddr.s_addr = inet_addr("224.5.23.2");
    mreq.imr_interface.s_addr = htonl(INADDR_ANY);
    if (setsockopt(sockfd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq)) < 0) {
        std::cerr << "setsockopt IP_ADD_MEMBERSHIP failed" << std::endl;
        close(sockfd);
    }

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        close(sockfd);
    }
}

void Receiver::recv()
{
    char buffer[1024];
    socklen_t len = sizeof(servaddr);

    int n = recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr*)&servaddr, &len);
    
    if(n > 0)
    {
        if (info.ParseFromArray(buffer, n)) {
            // ball_x 
            // ball = info.detection().balls();
            for (int i = 0; i < info.detection().balls().size(); i++)
            {
                std::cout << info.detection().balls()[i].x() << std::endl;
            }
        }
    }
}