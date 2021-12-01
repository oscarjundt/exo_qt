#include <QPainter>
#include <QKeyEvent>
#include <QTimer>
#include "cdialogprinc.h"
#include "ui_cdialogprinc.h"
#include "carre.h"
#include <time.h>

CDialogPrinc::CDialogPrinc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CDialogPrinc)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(onTimer()));
    timer->start(500);
    this->carre1 = new Carre(this->trr[0][1],this->trr[0][2],255,0,0);
    this->carre2 = new Carre(0,50,255,0,0);
    for(int i=0;i<5;i++){
        this->t[i]=new Carre(0,0,this->tabcolor[i][0],this->tabcolor[i][1],this->tabcolor[i][2]);
    }
    this->m_nLargeur=this->width();
    this->m_nHauteur=this->height();
    this->m_nSaut=10;
    this->m_nSens=5;
}

CDialogPrinc::~CDialogPrinc()
{
    delete ui;
}

void CDialogPrinc::paintEvent(QPaintEvent* e){
    QPainter painter(this);
    //carre1->Dessiner(&painter);
    //carre2->Dessiner(&painter);
    for(int i=0;i<5;i++){
        t[i]->Dessiner(&painter);
    }
}


void CDialogPrinc::onTimer(){
    this->repaint();
    //carre1->Deplacer('e',this->m_nHauteur,this->m_nLargeur);
    for(int i=0;i<5;i++){
        t[i]->Deplacer('e',this->m_nHauteur,this->m_nLargeur);
    }
}
