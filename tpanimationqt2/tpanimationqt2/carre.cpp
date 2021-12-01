#include <QKeyEvent>
#include <QPainter>
#include <iostream>
#include "carre.h"

using namespace std;

void Carre::SetX(int nX){
    this->m_nX=nX;
}
int Carre::GetX(){
    return this->m_nX;
}
void Carre::SetY(int nY){
    this->m_nY=nY;
}
int Carre::GetY(){
    return this->m_nY;
}
void Carre::SetCote(int nCote){
    this->m_nCote=nCote;
}

int Carre::GetCote(){
    return this->m_nCote;
}
/*
void Carre::Afficher(){
    cout<<"X:"<<this->m_nX<<endl;
    cout<<"Y:"<<this->m_nY<<endl;
    cout<<"cote:"<<this->m_nCote<<endl;
    for(int i=0;i<10;i++){
        for(int i2=0;i2<10;i2++){
            cout<<t[i][i2];
        }
        cout<<endl;
    }
}
*/

void Carre::Dessiner(QPainter *painter){
    painter->setBrush(this->m_color);
    painter->setPen(this->m_color);
    painter->drawRect(this->m_nX,this->m_nY,this->m_nCote,this->m_nCote);
}

Carre::Carre(int x, int y, int red, int green, int blue){
    this->m_nX = x;
    this->m_nY = y;
    this->m_nCote=50;
    this->m_color = QColor(red,green,blue);
}

void Carre::Deplacer(char cDirection, int Hauteur, int Largeur){
    if(this->res==0){
        if(this->m_nY<Hauteur-100){
            this->m_nY+=rand()%50;
            this->m_nX+=rand()%50;
        }
        else{
            this->res=1;
        }
    }
    if(this->res==1){
        if(this->m_nY>100){
            this->m_nY-=rand()%50;
            this->m_nX-=rand()%50;
        }
        else{
            this->res=0;
        }
    }
    if(this->res==2){
        if(this->m_nX<Largeur-100){
            this->m_nY+=rand()%50;
            this->m_nX+=rand()%50;
        }
        else{
            this->res=3;
        }
    }
    if(this->res==3){
        if(this->m_nX>100){
            this->m_nY-=rand()%50;
            this->m_nX-=rand()%50;
        }
        else{
            this->res=2;
        }
    }
}

/*
void Carre::SetMap(){
    for(int i=0;i<10;i++){
        for(int i2=0;i2<10;i2++){
            if(this->m_nX==i2 && this->m_nY==i){
                this->t[i][i2]='*';
            }
            else{
                this->t[i][i2]='-';
            }
        }
    }
}
*/
