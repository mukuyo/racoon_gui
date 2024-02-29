#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <vector>
#include "to_racoongui.pb.h"
#include "../src/field.hpp"

// using namespace std;
class Receiver : public Field
{
public:
    Receiver();
    void recv();
    BallInfo ball;
    RobotInfo blue_robots[16];
    RobotInfo yellow_robots[16];
    AvailableInfo available_info;
    std::vector<int> blue_available_ids;
    std::vector<int> yellow_available_ids;

private:
    int sockfd;
    struct sockaddr_in servaddr;
    struct ip_mreq mreq;

    RacoonGUI_Packet info;
};

#endif