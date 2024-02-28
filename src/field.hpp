#ifndef FIELD_H
#define FIELD_H

#include <QPainter>
#include <QApplication>
#include <QtWidgets/QWidget>
#include <QScreen>
#include <QSize>
#include <iostream>

struct BallInfo
{
    float x;
    float y;
    float speed;
};

class Field : public QWidget
{
    Q_OBJECT
public:
    Field(QWidget *parent = nullptr);
    void paint(BallInfo ball);

protected:
    void paintEvent(QPaintEvent *event);
    QScreen *screen;
    QSize screen_size;

    QPoint field_center;

    BallInfo ball_info;

    int screen_height;
    int screen_width;
    int slide_height;
    int slide_width;
    int field_width;
    int field_height;

    float ratio;
};

#endif