#ifndef COFFEMACHINE_H
#define COFFEMACHINE_H

#include <QObject>
#include <QDebug>
#include <QStringList>
#include <interfaces/iBrew.h>

class CoffeMachine : public QObject, public iBrew
{
    Q_OBJECT
public:
    explicit CoffeMachine(QObject *parent = nullptr);

signals:


    // iBrew interface
public:
    void addIngredients(QStringList &list) override;
    void brew() override;
};

#endif // COFFEMACHINE_H
