#ifndef FIELD_H
#define FIELD_H

#include <QPainter>
#include <QApplication>
#include <QtWidgets/QWidget>
#include <QScreen>
#include <QSize>
#include <QLabel>
#include <iostream>
#include "../common/math_utils.hpp"

struct BallInfo
{
    float x;
    float y;
    float speed;
};

struct RobotInfo
{
    uint32_t id;
    float x;
    float y;
    float speed;
    float theta;
};

class Field : public QWidget, public Utils
{
    Q_OBJECT
public:
    Field(QWidget *parent = nullptr);
    void paint(BallInfo ball, RobotInfo *blue_robots, RobotInfo *yellow_robots);

protected:
    void paintEvent(QPaintEvent *event);
    QScreen *screen;
    QSize screen_size;
    QLabel message_label = QLabel("Messages", this);
    QLabel message_text = QLabel(this);

    QPoint field_center;
    QPointF robot_center_p1;
    QPointF robot_center_p2;

    BallInfo ball_info;
    RobotInfo blue_robots_info[11];
    RobotInfo yellow_robots_info[11];

    int screen_height;
    int screen_width;
    int slide_height;
    int slide_width;
    int field_width;
    int field_height;

    float ratio;
};

#endif