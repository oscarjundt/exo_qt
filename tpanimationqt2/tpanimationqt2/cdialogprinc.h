#ifndef CDIALOGPRINC_H
#define CDIALOGPRINC_H
#include <QKeyEvent>
#include <QDialog>
#include "carre.h"

namespace Ui {
class CDialogPrinc;
}

class CDialogPrinc : public QDialog
{
    Q_OBJECT

public:
    explicit CDialogPrinc(QWidget *parent = nullptr);
    ~CDialogPrinc();
    void paintEvent(QPaintEvent* e);

private:
    int m_nLargeur;
    int m_nHauteur;
    int m_nSaut;
    int m_nSens;
    int res=0;
    int nb=0;
    int tabcolor[5][3]={{255,0,0},{0,255,0},{0,0,255},{255,255,0},{255,0,255}};
    Ui::CDialogPrinc *ui;
    int trr[4][3]={{0,0,50},{100,0,50},{200,0,50},{300,0,50}};
    Carre *carre1;
    Carre *carre2;
    Carre *t[5];
public slots:
    void onTimer();
};

#endif // CDIALOGPRINC_H
