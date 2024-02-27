// #include <QtWidgets/QApplication>
// #include <QtWidgets/QLabel>
// #include "src/field.hpp"
// #include "google/protobuf/port_def.inc"

// int main(int argc, char *argv[]) 
// {
//     QApplication app(argc, argv);
//     Field field;
//     field.show();
//     return app.exec();
// }
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include "ssl_vision_wrapper.pb.h"

int main() {
    int sockfd = socket(AF_INET, SOCK_DGRAM, 0);
    if (sockfd < 0) {
        std::cerr << "Socket creation failed" << std::endl;
        return -1;
    }

    struct sockaddr_in servaddr;
    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("224.5.23.2");
    servaddr.sin_port = htons(10020);

    struct ip_mreq mreq;
    mreq.imr_multiaddr.s_addr = inet_addr("224.5.23.2");
    mreq.imr_interface.s_addr = htonl(INADDR_ANY);
    if (setsockopt(sockfd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq)) < 0) {
        std::cerr << "setsockopt IP_ADD_MEMBERSHIP failed" << std::endl;
        close(sockfd);
        return -1;
    }

    if (bind(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) < 0) {
        std::cerr << "Bind failed" << std::endl;
        close(sockfd);
        return -1;
    }

    while (true) {
        char buffer[1024];
        socklen_t len = sizeof(servaddr);

        int n = recvfrom(sockfd, buffer, 1024, 0, (struct sockaddr*)&servaddr, &len);
        SSL_WrapperPacket info;
        // info.ParseFromArray(blobBuffer, blobSize);
        // std::cout << info. << std::endl;
        // if (n > 0) {
            
            // SSL_GeometryData *ball_info = new SSL_GeometryData();
            // SSL_GeometryData ball_info;

            // const int *a;
            // std::cout<< geometry->x() <<std::endl;
            // std::cout<<"aa"<<std::endl;
            // データのデシリアライズ
            
            // std::cout<<ball_info->ByteSize()<<std::endl;

            // const char *buffer2;
            // ball_info->ParseFromArray(buffer2, n);
            if (info.ParseFromArray(buffer, n)) {
                // ロボットやボールの座標の処理
                // std::cout << "a" << std::endl;
                std::cout << info.detection().camera_id() << std::endl;
                // 例: geometry.field().field_length(), geometry.field().field_width() などを使用
            }
        // }
        
    }

    close(sockfd);
    return 0;
}