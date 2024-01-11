#include "coffemachine.h"

CoffeMachine::CoffeMachine(QObject *parent) : QObject(parent)
{

}


void CoffeMachine::addIngredients(QStringList &list)
{
    foreach(QString item, list)
    {
        qInfo() << "Adding: " << item;
    }
}

void CoffeMachine::brew()
{
    qInfo() << "Heating";
    qInfo() << "Pour";
    qInfo() << "Beep";
}
