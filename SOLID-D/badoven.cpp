#include "badoven.h"

BadOven::BadOven(QObject *parent) : BasicOven(parent)
{

}


void BadOven::bake()
{
    qInfo() << this << "Doing bad oven stuff";
    qInfo() << this << "Baking";
    flip();
    rotate();
}
void BadOven::flip()
{
    qInfo() << this << "Flipping";
}

void BadOven::rotate()
{
    qInfo() << this << "Rotating";
}
