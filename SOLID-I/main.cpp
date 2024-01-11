#include <QCoreApplication>

/* SOLID
 *
 * Interface Segregation Principle
 *
 * Clients should not be forced to depend upon interfacese that they do not use
 *
 * Adding too much to an interface could cause unneeded code, and undesirable effects
 */

#include "interfaces/iFlaying.h"
#include "interfaces/iMachine.h"
#include "bird.h"
#include "airplane.h"

void trip(iFlaying *obj)
{
    obj->fly();
    obj->land();
}

void checkFuel(iMachine *obj)
{
    obj->refuel();
}

void testBird()
{
    Bird bird;
    trip(&bird);
}

void testPlane()
{
    AirPlane plane;
    trip(&plane);
    checkFuel(&plane);
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    testBird();
    testPlane();

    return a.exec();
}
