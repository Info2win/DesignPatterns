#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>

#include "filesystem.h"

/*
 * KEEP IT SIMPLE
 *
 * Just because a design pattern exists, it does not mean we should use it
 *
 * Simple is always better
 *
 * EXAMPLE
 * QFile vs iFileIO
 *
 * Interface and class in this example is OVERLY complex and not need. A simple function can do the all work simply.
 *
 */

void testIO(iFileIO *io, const QString &path, const QString &data)
{
    if(io->write(path,data))
    {
        QString value = io->read(path);
        Q_ASSERT(data == value);
        qInfo() << "Complex IO test passed!";
    }
    else
    {
        qCritical() << "Complex IO test failed!";
    }
}

void complexIO(const QString &path, const QString &data)
{
    FileSystem fileSystem;
    testIO(&fileSystem, path, data);
}


// This functions simply does the all the stuff other complex pattern(interface and class) do
void simpleIO(const QString &path, const QString &data)
{
    QFile file(path);
    if(!file.open(QIODevice::ReadWrite))
    {
        qCritical() << "Simple test failed!";
        return;
    }

    QTextStream stream(&file);
    stream << data;
    stream.seek(0);

    QString value = stream.readAll();
    file.close();
    Q_ASSERT(value == data);
    qInfo() << "Simple test passed";
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    const QString path = "text.txt";

    const QString data = "ilker";

    complexIO(path, data); // if someone does a silly mistake inside the filesystem class (for example returning false while it should return true), it requires to over interface, class to fix it
    //simpleIO(path,data); // this only requires to go over a function to find the mistake

    return a.exec();
}
