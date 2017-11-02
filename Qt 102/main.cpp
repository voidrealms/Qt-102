#include <QtCore/QCoreApplication>
#include "test.h"
#include <QPointer>
#include "child.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test cTest;

    QPointer<Child> cChild = new Child;

    cChild->DoSomething();

    return a.exec();
}
