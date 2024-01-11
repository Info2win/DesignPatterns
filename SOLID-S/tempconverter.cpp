#include "tempconverter.h"

TempConverter::TempConverter(QObject *parent) : QObject(parent)
{

}

int TempConverter::celsiusToFahrenheit(int pValue)
{
    auto output = (pValue * 9.0) / 5.0 + 32;
    return output;
}

int TempConverter::fahrenheitToCelsius(int pValue)
{
    auto output = (pValue - 32) * 5.0  / 9.0;
    return output;
}
