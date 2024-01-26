#include "filesystem.h"

FileSystem::FileSystem(QObject *parent)
    : QObject{parent}
{

}


bool FileSystem::write(const QString &path, const QString &data)
{
    QFile file(path);

    if(!file.open(QIODevice::WriteOnly)) return false;

    QTextStream stream(&file);
    stream << data;
    file.close();

    return true; // cloud return false here accidently and this results in digging over class to fix this little bug
}

QString FileSystem::read(const QString &path)
{
    QFile file(path);
    QString value;
    if(!file.open(QIODevice::ReadOnly)) return value;

    QTextStream stream(&file);

    value = stream.readAll();
    file.close();

    return value;
}
