#ifndef TEMPCONVERTER_H
#define TEMPCONVERTER_H

#include <QObject>

class TempConverter : public QObject
{
    Q_OBJECT
public:
    explicit TempConverter(QObject *parent = nullptr);

    int celsiusToFahrenheit(int pValue);
    int fahrenheitToCelsius(int pValue);

signals:

};

#endif // TEMPCONVERTER_H
