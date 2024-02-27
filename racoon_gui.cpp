#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "src/field.hpp"
#include "network/receiver.hpp"

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    Field field;
    Receiver receiver;
    while(true)
    {
        receiver.recv();
    }
    field.show();
    return app.exec();
}