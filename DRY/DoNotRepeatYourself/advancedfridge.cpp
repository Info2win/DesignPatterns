#include "advancedfridge.h"

AdvancedFridge::AdvancedFridge()
{

}

void AdvancedFridge::deepFreeze()
{
    qInfo() << this << "Putting food into a deep freeze";
}

iRadio *AdvancedFridge::radio() const
{
    return mRadio;
}

void AdvancedFridge::setRadio(iRadio *newRadio)
{
    mRadio = newRadio;
}
