#include "field.hpp"
#include <QPainter>
#include <QApplication>
#include <iostream>
Field::Field(QWidget *parent) : QWidget(parent)
{
    screen = QGuiApplication::primaryScreen();
    slide_width = 40;
    slide_height = 40;
    
    screen_size = screen->size();
    screen_height = screen_size.height() - 55;
    screen_width = screen_size.width();
    
    setFixedSize(screen_width, screen_height);

    field_width = screen_width*0.7 - slide_width*2;
    field_height = field_width*2/3;
    field_center = QPoint(slide_width + field_width/2, slide_height + field_height/2);

    ratio = float(field_width) / 12000.0;
}

void Field::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //background
    painter.setBrush(QColor(64, 64, 64));
    painter.setPen(QColor(64, 64, 64));
    QRect rectangle(0, 0, screen_width*0.7, slide_height*2 + field_height);
    painter.drawRect(rectangle);

    //filed
    painter.setPen(Qt::white);
    painter.drawRect(slide_width, slide_height, field_width, field_height);
    
    //circle
    painter.drawEllipse(field_center, int(1000 * ratio), int(1000 * ratio));
    painter.drawEllipse(field_center, 1, 1);

    //goal
    painter.drawRect(slide_width + field_width, field_center.y() - 900*ratio, 180*ratio, 1800*ratio);
    painter.drawRect(slide_width+1 - 180*ratio, field_center.y() - 900*ratio, 180*ratio, 1800*ratio);

    //penalty
    painter.drawRect(slide_width, field_center.y() - 1800*ratio, 1800*ratio, 3600*ratio);
    painter.drawRect(slide_width+1 + field_width - 1800*ratio, field_center.y() - 1800*ratio, 1800*ratio, 3600*ratio);

    //line
    painter.drawLine(field_center.x(), slide_height, field_center.x(), field_height + slide_height);
    painter.drawLine(slide_width, field_center.y(), field_width + slide_width, field_center.y());
}