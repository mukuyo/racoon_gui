#include "field.hpp"

Field::Field(QWidget *parent) : QWidget(parent)
{
    screen = QGuiApplication::primaryScreen();
    slide_width = 25;
    slide_height = 25;
    
    screen_size = screen->size();
    screen_height = screen_size.height() - 55;
    screen_width = screen_size.width();
    
    setFixedSize(screen_width, screen_height);

    field_width = screen_width*0.7 - slide_width*2;
    field_height = field_width*3/4;
    field_center = QPoint(slide_width + field_width/2, slide_height + field_height/2);

    ratio = float(field_width) / float(12000.0);
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

    //ball
    painter.setBrush(QColor(255, 165, 0));
    painter.setPen(QColor(255, 165, 0));
    painter.drawEllipse(field_center.x() + ball_info.x*ratio, field_center.y() - ball_info.y*ratio, 2, 2);

    //robot
    // painter.drawChord(
        // 100, 100,180*ratio,180*ratio,
        // int(degrees(MU.radian_normalize(robot.theta - radians(45))) * 16),
        // int(MU.radian_normalize(0 - 45*M_PI/180.0)*180.0/M_PI)*16,275 * 16);
}

void Field::paint(BallInfo ball)
{
    ball_info = ball;
    Field::update();
}