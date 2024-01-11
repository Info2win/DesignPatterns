#include <QCoreApplication>

/*
 SOLID
 Single Responsibility Principle
 A class should only have a single responsibility
 Makes creating, and maintaining the class easier
 */

#include <QDebug>
#include "tempconverter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TempConverter tempConverter;
    int value = 32;

    qInfo()<< "c to f" << tempConverter.celsiusToFahrenheit(value);
    qInfo()<< "f to c" << tempConverter.fahrenheitToCelsius(value);

    return a.exec();
}
