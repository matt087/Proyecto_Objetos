#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
using namespace std;

class Pelicula
{
public:
    Pelicula();
    Pelicula(int, string, int, bool, string);
    int getId() const;
    const string &getTitulo() const;
    int getDuracion() const;
    bool getEstreno() const;
    const string &getHora() const;

private:
    int id;
    string titulo;
    int duracion;
    bool estreno;
    string hora;
};

#endif // PELICULA_H
