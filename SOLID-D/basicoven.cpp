#include "basicoven.h"

BasicOven::BasicOven(QObject *parent) : QObject(parent)
{

}


void BasicOven::bake()
{
    qInfo() << this << "Doing basic stuff";
    qInfo() << this << "Baking";
    qInfo() << this << "BLAAAA";
}
