#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include "ssl_vision_wrapper.pb.h"
#include "ssl_vision_detection.pb.h"
#include "../src/field.hpp"

class Receiver : public Field
{
public:
    Receiver();
    void recv();
    BallInfo ball;
    RobotInfo blue_robots[11];
    RobotInfo yellow_robots[11];

private:
    int sockfd;
    struct sockaddr_in servaddr;
    struct ip_mreq mreq;

    SSL_WrapperPacket info;
    
};

#endif