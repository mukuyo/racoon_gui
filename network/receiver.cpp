#include "receiver.hpp"

Receiver::Receiver() : Field()
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
        // close(sockfd);
    }

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        // close(sockfd);
    }
    Field::show();
}

void Receiver::recv()
{
    char buffer[1024];
    socklen_t len = sizeof(servaddr);

    int n = recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr*)&servaddr, &len);
    if(n > 0)
    {
        if (info.ParseFromArray(buffer, n)) {
            for (int i = 0; i < info.detection().balls().size(); i++)
            {
                ball.x = info.detection().balls()[i].x();
                ball.y = info.detection().balls()[i].y();
            }
            for (int i = 0; i < info.detection().robots_blue().size(); i++)
            {
                int robot_id = info.detection().robots_blue()[i].robot_id();
                blue_robots[robot_id].id = info.detection().robots_blue()[i].robot_id();
                blue_robots[robot_id].x = info.detection().robots_blue()[i].x();
                blue_robots[robot_id].y = info.detection().robots_blue()[i].y();
                blue_robots[robot_id].theta = info.detection().robots_blue()[i].orientation();
            }
            for (int i = 0; i < info.detection().robots_yellow().size(); i++)
            {
                int robot_id = info.detection().robots_yellow()[i].robot_id();
                yellow_robots[robot_id].id = info.detection().robots_yellow()[i].robot_id();
                yellow_robots[robot_id].x = info.detection().robots_yellow()[i].x();
                yellow_robots[robot_id].y = info.detection().robots_yellow()[i].y();
                yellow_robots[robot_id].theta = info.detection().robots_yellow()[i].orientation();
            }
            Field::paint(ball, blue_robots, yellow_robots);
        }
    }
}