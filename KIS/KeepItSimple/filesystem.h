#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QTextStream>

#include "iFileIO.h"

class FileSystem : public QObject, public iFileIO
{
    Q_OBJECT
public:
    explicit FileSystem(QObject *parent = nullptr);

signals:




    // iFileIO interface
public:
    bool write(const QString &path, const QString &data) override;
    QString read(const QString &path) override;
};

#endif // FILESYSTEM_H
