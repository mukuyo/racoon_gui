#ifndef FIELD_H
#define FIELD_H

#include <QtWidgets/QWidget>
#include <QScreen>
#include <QSize>

class Field : public QWidget
{
    Q_OBJECT
public:
    Field(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
    QScreen *screen;
    QSize screen_size;

    int screen_height;
    int screen_width;
    int slide_height;
    int slide_width;
};

#endif