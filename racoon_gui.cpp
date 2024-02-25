#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include "src/field.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Field field;
    field.show();
    return app.exec();
}