#include <windows.h>

#include "boleto.h"

void gotoxy(int x, int y);
void dibujarCuadro(int x1,int y1,int x2,int y2);

Boleto::Boleto()
{
    this->sala= 0;
    this->pelicula = Pelicula(0,"S/T",0,false,"00:00");
    this->fila= ' ';
    this->columna=0;
}

Boleto::Boleto(int s,Pelicula p, char f, int c) :sala(s),pelicula(p),fila(f),columna(c){}

void Boleto::imprimir_boleto(int x1, int y1, int x2, int y2)
{
    cout<<"Boleto #"<<num_boleto;
    gotoxy(x1,y1); cout<<"Sala: "<<this->sala<<endl;
    gotoxy(x1,y1+2); cout<<"Hora: "<<this->pelicula.getHora()<<endl;
    gotoxy(x1,y1+4); cout<<"Asiento: "<<this->fila<<this->columna<<endl;
    gotoxy(x1,y1+6); cout<<"Pelicula: "<<this->pelicula.getTitulo()<<endl;
    dibujarCuadro(x1-2,y1-1,x2,y2);
    num_boleto++;
    cout<<"\n";
}

void gotoxy(int x, int y)
{
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void dibujarCuadro(int x1,int y1,int x2,int y2)
{
    int i;

    for (i=x1;i<x2;i++)
    {
        gotoxy(i,y1); cout << "═";
        gotoxy(i,y2); cout << "═";
    }

    for (i=y1;i<y2;i++)
    {
        gotoxy(x1,i); cout <<"║";
        gotoxy(x2,i); cout <<"║";
    }

    gotoxy(x1,y1); cout<< "╔";
    gotoxy(x1,y2); cout<< "╚";
    gotoxy(x2,y1); cout<< "╗";
    gotoxy(x2,y2); cout<< "╝";
}
