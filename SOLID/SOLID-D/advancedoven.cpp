#include "advancedoven.h"

AdvancedOven::AdvancedOven(QObject *parent) : QObject(parent)
{

}


void AdvancedOven::bake()
{
    qInfo() << this << "Doing advanced stuff";
    qInfo() << this << "Baking";
    flip();
    rotate();
}

void AdvancedOven::flip()
{
    qInfo() << this << "Flipping";
}

void AdvancedOven::rotate()
{
    qInfo() << this << "Rotating";
}
