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
#include "../network/receiver.hpp"
#include "observer.hpp"

class Field : public QWidget, public Observer, public Utils
{
    Q_OBJECT
public:
    Field(QWidget *parent = nullptr);
    void paint(Receiver& receiver);

protected:
    void paintEvent(QPaintEvent *event);
    QScreen *screen;
    QSize screen_size;
    QLabel message_label = QLabel("Messages", this);
    QLabel message_text = QLabel(this);

    QPoint field_center;
    QPointF robot_center_p1;
    QPointF robot_center_p2;
    
    BallInfo ball;
    RobotInfo blue_robots[16];
    RobotInfo yellow_robots[16];
    AvailableInfo available;

    int screen_height;
    int screen_width;
    int slide_height;
    int slide_width;
    int field_width;
    int field_height;

    float ratio;

    int display_num;
};

#endif