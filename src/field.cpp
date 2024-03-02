#include "field.hpp"

Field::Field(QWidget *parent) : QWidget(parent), Utils()
{
    screen = QGuiApplication::primaryScreen();
    slide_width = 25;
    slide_height = 25;
    
    screen_size = screen->size();
    screen_height = screen_size.height() - 55;
    screen_width = screen_size.width();
    
    setFixedSize(screen_width, screen_height);

    field_width = screen_width*0.65 - slide_width*2;
    field_height = field_width*3/4;
    field_center = QPoint(slide_width + field_width/2, slide_height + field_height/2);

    ratio = float(field_width) / float(12000.0);

    show();
}

void Field::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    //background
    painter.setBrush(QColor(64, 64, 64));
    painter.setPen(QColor(64, 64, 64));
    painter.drawRect(0, 0, screen_width*0.65, slide_height*2 + field_height);

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
    painter.drawEllipse(field_center.x() + ball.x*ratio - 1.5, field_center.y() - ball.y*ratio - 1.5, 3, 3);
    
    //robot
    for(size_t j = 0; j < available.blue_robots.size(); j++)
    {
        int i = available.blue_robots[j];
        painter.setBrush(Qt::blue);
        painter.setPen(Qt::black);
        painter.drawChord(
            field_center.x() + blue_robots[i].x*ratio - (90*ratio), field_center.y() - blue_robots[i].y*ratio - (90*ratio), 180*ratio, 180*ratio,
            int(degrees(radian_normalize(blue_robots[i].theta + radians(45))) * 16),
            275 * 16);

        robot_center_p1 = QPointF(
            blue_robots[i].x*ratio + field_center.x(),
            -blue_robots[i].y*ratio + field_center.y()
        );
        robot_center_p2 = QPointF(
            blue_robots[i].x*ratio
            + field_center.x()
            - 5.0 * cos(radian_normalize(-blue_robots[i].theta - M_PI)),
            -blue_robots[i].y*ratio
            + field_center.y()
            - 5.0 * sin(radian_normalize(-blue_robots[i].theta - M_PI))
        );
        painter.drawLine(robot_center_p1, robot_center_p2);
    }
    for(size_t j = 0; j < available.yellow_robots.size(); j++)
    {
        int i = available.yellow_robots[j];
        painter.setBrush(Qt::yellow);
        painter.drawChord(
            field_center.x() + yellow_robots[i].x*ratio - (90*ratio), field_center.y() - yellow_robots[i].y*ratio - (90*ratio), 180*ratio, 180*ratio,
            int(degrees(radian_normalize(yellow_robots[i].theta + radians(45))) * 16),
            275 * 16);
        robot_center_p1 = QPointF(
            yellow_robots[i].x*ratio + field_center.x(),
            -yellow_robots[i].y*ratio + field_center.y()
        );
        robot_center_p2 = QPointF(
            yellow_robots[i].x*ratio
            + field_center.x()
            - 5.0 * cos(radian_normalize(-yellow_robots[i].theta - M_PI)),
            -yellow_robots[i].y*ratio
            + field_center.y()
            - 5.0 * sin(radian_normalize(-yellow_robots[i].theta - M_PI))
        );
        painter.drawLine(robot_center_p1, robot_center_p2);
    
    }

    //Console
    painter.setBrush(QColor(45, 45, 45));
    painter.setPen(QColor(45, 45, 45));
    painter.drawRect(0, slide_height*2 + field_height, screen_width, slide_height/1.5);

    painter.setBrush(QColor(30, 30, 30));
    painter.setPen(QColor(30, 30, 30));
    painter.drawRect(0, slide_height*2 + field_height + slide_height/1.5, screen_width, screen_height);
    message_label.move(0, slide_height*2 + field_height - 1);
    message_text.move(0, slide_height*2 + field_height + slide_height/1.5);
    message_text.setGeometry(2, slide_height*2 + field_height + slide_height/1.5 + 2, 1000, 10);
    message_text.setText(QString::number(display_num));
    
}

void Field::paint(Receiver& receiver)
{
    ball = receiver.ball;
    available = receiver.available;
    for(int i = 0; i < 11; i++)
    {
        blue_robots[i] = receiver.blue_robots[i];
        yellow_robots[i] = receiver.yellow_robots[i];
    }
    display_num = ball.x;
    Field::update();
}