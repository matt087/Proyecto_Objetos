#ifndef BOLETO_H
#define BOLETO_H

#include "pelicula.h"

class Boleto
{
public:
    Boleto();
    Boleto(int, Pelicula, char, int);
private:
    int sala;
    Pelicula pelicula;
    char fila;
    int columna ;
};

#endif // BOLETO_H
