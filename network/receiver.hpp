#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include "ssl_vision_wrapper.pb.h"
#include "ssl_vision_detection.pb.h"
// #include ""

#ifndef RECEIVER_H
#define RECEIVER_H

class Receiver
{
public:
    Receiver();
    void recv();

private:
    int sockfd;
    struct sockaddr_in servaddr;
    struct ip_mreq mreq;

    SSL_WrapperPacket info;
    SSL_DetectionBall ball;
};

#endif