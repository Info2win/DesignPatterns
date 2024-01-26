#ifndef IFILEIO_H
#define IFILEIO_H

#include <QString>

class iFileIO
{
public:
    virtual bool write(const QString &path, const QString &data) = 0;
    virtual QString read(const QString &path) = 0;
};

#endif // IFILEIO_H
