#include "cdialogprinc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CDialogPrinc w;
    w.show();
    return a.exec();
}
