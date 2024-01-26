#ifndef ADVANCEDFRIDGE_H
#define ADVANCEDFRIDGE_H

/*
 * Hybred object with both interfaces and composition
 *
 * Vender makes an advanced fridge and decides to put a radio in it
 * Why make a new basic radio, when you can simply put the existing radio into the fridge
 */

#include <QObject>
#include <QDebug>
#include "basicfridge.h"
#include "interfaces/iRadio.h"

class AdvancedFridge : public BasicFridge
{
public:
    AdvancedFridge();

    void deepFreeze();
    iRadio *radio() const;
    void setRadio(iRadio *newRadio);

private:
    iRadio *mRadio;
};

#endif // ADVANCEDFRIDGE_H
