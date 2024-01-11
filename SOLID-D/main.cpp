#include <QCoreApplication>

/*
 * SOLID
 *
 * Dependency Inversion Principle
 *
 * DEFINITION
 *
 * High-level modules should not depend on low-level modules. Both should depend on abstractions.
 * Abstractions should not depend on details. Details should depend on abstractions.
 * Based on other SOLID principles
 * High-level and low-level modules depend on the abstraction.
 *
 * WHY
 *
 * If the details change, breaks could occur!
 * The interfaces enable you to add new functionality without any existing code by adding new interfaces.
 *
 * EXAMPLES
 *
 * Oven, Advanced Oven, Bad Oven
*/

#include "basicoven.h"
#include "badoven.h"
#include "advancedoven.h"
#include "interfaces/iOven.h"

void cook(iOven *oven)
{
    oven->bake();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BasicOven basicOven;
    AdvancedOven advancedOven;
    BadOven badOven;

    cook(&basicOven);
    cook(&advancedOven);
    cook(&badOven); // still works, but does break this principle, changes to basicoven will impact badoven

    return a.exec();
}
