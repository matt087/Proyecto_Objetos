#include "boleto.h"

Boleto::Boleto()
{
    this->sala= 0;
    this->pelicula = Pelicula(0,"S/T",0,false,"00:00");
    this->fila= ' ';
    this->columna=0;
}

Boleto::Boleto(int s,Pelicula p, char f, int c) :sala(s),pelicula(p),fila(f),columna(c){}


