#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "src/field.hpp"
#include "network/receiver.hpp"

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    Receiver receiver;
    while(true)
    {
        receiver.recv();
        app.processEvents();
    }
    // field.show();
    // return app.exec();
}