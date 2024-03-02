#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <vector>
#include "receive_racoonai.pb.h"
#include "../common/math_utils.hpp"

// using namespace std;
class Receiver
{
public:
    Receiver();
    void recv();

    BallInfo ball;
    RobotInfo blue_robots[16];
    RobotInfo yellow_robots[16];
    AvailableInfo available;

private:
    std::vector<int> blue_available_ids;
    std::vector<int> yellow_available_ids;

    int sockfd;
    struct sockaddr_in servaddr;
    struct ip_mreq mreq;

    ReceiveGUI_Packet info;
};

#endif