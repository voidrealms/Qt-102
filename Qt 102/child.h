#ifndef CHILD_H
#define CHILD_H

#include <QObject>
#include <QDebug>

class Child : public QObject
{
    Q_OBJECT
public:
    explicit Child(QObject *parent = 0);

signals:

public slots:

public:
    void DoSomething();
};

#endif // CHILD_H
