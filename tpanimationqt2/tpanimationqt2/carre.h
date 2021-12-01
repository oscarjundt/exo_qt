#ifndef CARRE_H
#define CARRE_H
#include <QPainter>
#include <QKeyEvent>
class Carre{
private:
    int m_nX;
    int m_nY;
    int m_nCote;
    QColor m_color;
    int res=0;
public:
    Carre(int x,int y, int red, int green, int blue);
    void SetX(int nX);
    void SetY(int nY);
    void SetCote(int nCote);
    int GetX();
    int GetY();
    int GetCote();
    void SetMap();
    void Dessiner(QPainter *painter);
    void Deplacer(char cDirection,int hauteur,int largeur);
};


#endif // CARRE_H
