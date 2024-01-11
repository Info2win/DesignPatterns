#ifndef BIRD_H
#define BIRD_H

#include <QObject>
#include <QDebug>
#include <interfaces/iFlaying.h>

class Bird : public QObject, public iFlaying
{
    Q_OBJECT
public:
    explicit Bird(QObject *parent = nullptr);

signals:


    // iFlaying interface
public:
    void fly() override;
    void land() override;
};

#endif // BIRD_H
