#ifndef SENDER_H
#define SENDER_H

#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <vector>
#include "send_racoonai.pb.h"

class Sender
{
public:
    Sender();
    void send();
private:
    int sockfd;
    struct sockaddr_in servaddr;
    struct ip_mreq mreq;

    SendGUI_Packet info;
};

#endif