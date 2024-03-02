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
    servaddr.sin_port = htons(40011);

    mreq.imr_multiaddr.s_addr = inet_addr("224.5.23.2");
    mreq.imr_interface.s_addr = htonl(INADDR_ANY);
    if (setsockopt(sockfd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq)) < 0) {
        std::cerr << "setsockopt IP_ADD_MEMBERSHIP failed" << std::endl;
        ::close(sockfd);
    }

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        ::close(sockfd);
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
            for (int i = 0; i < info.our_robots().size(); i++)
            {
                int robot_id = info.our_robots()[i].robot_id();
                blue_robots[robot_id].id = info.our_robots()[i].robot_id();
                blue_robots[robot_id].x = info.our_robots()[i].x();
                blue_robots[robot_id].y = info.our_robots()[i].y();
                blue_robots[robot_id].theta = info.our_robots()[i].theta();
                blue_robots[robot_id].speed = info.our_robots()[i].speed();
                blue_robots[robot_id].is_visible = info.our_robots()[i].visible();
                blue_robots[robot_id].is_online = info.our_robots()[i].online();
            }
            for (int i = 0; i < info.their_robots().size(); i++)
            {
                int robot_id = info.their_robots()[i].robot_id();
                yellow_robots[robot_id].id = info.their_robots()[i].robot_id();
                yellow_robots[robot_id].x = info.their_robots()[i].x();
                yellow_robots[robot_id].y = info.their_robots()[i].y();
                yellow_robots[robot_id].theta = info.their_robots()[i].theta();
                yellow_robots[robot_id].speed = info.their_robots()[i].speed();
                yellow_robots[robot_id].is_visible = info.their_robots()[i].visible();
                yellow_robots[robot_id].is_online = info.their_robots()[i].online();
            }
            blue_available_ids.clear();
            yellow_available_ids.clear();
            for (int i = 0; i < info.available_ids().our_available_ids().size(); i++)
                blue_available_ids.push_back(info.available_ids().our_available_ids()[i]);
            for (int i = 0; i < info.available_ids().their_available_ids().size(); i++)
                yellow_available_ids.push_back(info.available_ids().their_available_ids()[i]);
            available.blue_robots = blue_available_ids;
            available.yellow_robots = yellow_available_ids;
            ball.x = info.ball().x();
            ball.y = info.ball().y();
        }
    }
}