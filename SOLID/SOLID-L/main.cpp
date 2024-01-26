#include <QCoreApplication>

/*
 * SOLID
 * Liskov Substitution Principle
 * Objects in a program should be replaceble with instances of their subtypes without altering the correctness of that program.
 *
 * EXAMPLE
 *
 * QT += network
 * TCP Sockets - its easy to break this, and hard to detect it.
 * A class and function should do what it says it will do
*/

#include <QDebug>
#include <QTcpSocket>
#include "mysocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //QTcpSocket socket;
    MySocket socket;
    qInfo() << "Connecting...";
    socket.connectToHost("google.com",80);
    socket.waitForConnected();
    qInfo() << "Connected";
    // do something while connected

    qInfo() << "Closing...";
    socket.close();

    if(socket.isOpen()) socket.waitForDisconnected();
    qInfo() << "Complete!";
;
    return a.exec();
}
