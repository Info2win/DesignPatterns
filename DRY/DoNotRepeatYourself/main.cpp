#include <QCoreApplication>

/*
 * DRY - Do not repeat yourself
 *
 * Every piece of knowledge must have a single, unambiguous, authoritative representation within a system.
 *
 * It reduces repetition of software patterns
 *
 * EXAMPLE
 * When to use interfaces vs inheritance
 * Interface is a contract between objects
 * Inheritiance is changing the functionality of an object
 *
 *
 * Interfaces - the contracts
 * Classes - the implimentations
 * Inheritance - modified implimentations
 */

#include "basicfridge.h"
#include "advancedfridge.h"
#include "basicradio.h"

void testBasic(BasicFridge *fridge)
{
    fridge->chill();
    fridge->freeze();
}

void testAdvanced(AdvancedFridge *fridge)
{
    fridge->chill();
    fridge->freeze();
    fridge->deepFreeze();

    if(fridge->radio())
    {
        fridge->radio()->play();
        fridge->radio()->stop();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BasicFridge basicFridge;
    AdvancedFridge advancedFridge;

    BasicRadio radio;
    advancedFridge.setRadio(&radio);

    qInfo() << "Testing basic fridge with BasicFridge pointer";
    testBasic(&basicFridge);

    qInfo() << "Testing basic fridge with AdvancedFridge(which is also a basic fridge thanks to inheritance) pointer";
    testBasic(&advancedFridge);

    qInfo() << "Testing advanced fridge with AdvancedFridge pointer";

    testAdvanced(&advancedFridge);


    return a.exec();
}
