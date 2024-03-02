#include "sender.hpp"

Sender::Sender()
{
    sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Socket creation failed" << std::endl;
    }

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(50011);
    inet_pton(AF_INET, "127.0.0.1", &servaddr.sin_addr); // サーバーのIPアドレス

    if (connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        std::cerr << "Connect failed." << std::endl;
    }
}

void Sender::send()
{
    Referee_Information* referee_info = info.mutable_referee();
    referee_info->set_command(Referee_Information::STOP);
    std::string serialized;
    info.SerializeToString(&serialized);
    ::send(sockfd, serialized.c_str(), serialized.size(), 0);
}