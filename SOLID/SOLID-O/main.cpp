#include <QCoreApplication>

/*
 SOLID

 Open/Closed Principle

 Software entities should be open for extension, but closed for modification.

 Avoids breaking things in the future if we modify the code

 EXAMPLE

 Many frameworks use inheritance but this creates tight coupling
 For example, Qt uses inheritance mostly QTCPSocket and QSSLSocket
 I will use an interface so this example aslo complies with the other solid principles

*/


#include<QDebug>
#include<QStringList>
#include "shop.h"
#include "coffemachine.h"
#include "caffeinator3000.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Shop shop;

    QStringList list;
    list << "Sugar" << "Flavoring";

    //CoffeMachine machine;

    Caffeinator3000 machine;

    shop.sellDrink(list,&machine);

    return a.exec();
}
