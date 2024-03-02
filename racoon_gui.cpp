#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "src/field.hpp"
#include "network/receiver.hpp"
#include "network/sender.hpp"

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    Receiver receiver;
    Sender sender;
    Field field;
    
    while(true)
    {
        receiver.recv();
        sender.send();
        field.paint(receiver);
        app.processEvents();
    }
}