#include "field.hpp"
#include <QPainter>
#include <QApplication>

Field::Field(QWidget *parent) : QWidget(parent)
{
    screen = QGuiApplication::primaryScreen();
    slide_width = 40;
    slide_height = 80;
    if(screen)
    {
        screen_size = screen->size();
        screen_height = screen_size.height() - 55;
        screen_width = screen_size.width();
        setFixedSize(screen_width, screen_height);
    }
}

void Field::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //background
    painter.setBrush(QColor(64, 64, 64));
    painter.setPen(QColor(64, 64, 64));
    QRect rectangle(0, 0, screen_width*0.7, screen_height);
    painter.drawRect(rectangle);

    //filed
    painter.setPen(Qt::white);
    painter.drawRect(slide_width, slide_height, screen_width*0.7 - slide_width*2, screen_height - slide_height*2);
    
}