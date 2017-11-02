#include "child.h"

Child::Child(QObject *parent) :
    QObject(parent)
{
}

void Child::DoSomething()
{
    qDebug() << "Do Something";
}
