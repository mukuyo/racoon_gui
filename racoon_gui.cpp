#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "src/field.hpp"
#include "google/protobuf/port_def.inc"

int main(int argc, char *argv[]) 
{
    QApplication app(argc, argv);
    Field field;
    field.show();
    return app.exec();
}