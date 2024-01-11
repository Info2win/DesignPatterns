#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <QObject>
#include <QDebug>
#include <interfaces/iFlaying.h>
#include <interfaces/iMachine.h>

class AirPlane : public QObject, public iFlaying, public iMachine
{
    Q_OBJECT
public:
    explicit AirPlane(QObject *parent = nullptr);

signals:


    // iMachine interface
public:
    void refuel() override;

    // iFlaying interface
public:
    void fly() override;
    void land() override;
};

#endif // AIRPLANE_H
