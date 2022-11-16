#include "pelicula.h"

Pelicula::Pelicula()
{
    this->id = 0;
    this->titulo = "S/T";
    this->duracion = 0;
    this->estreno = false;
    this->hora="00:00";
}

Pelicula::Pelicula(int i, string t, int d, bool e, string h): id(i), titulo(t), duracion(d), estreno(e), hora(h){}

int Pelicula::getId() const
{
    return id;
}

const string &Pelicula::getTitulo() const
{
    return titulo;
}

int Pelicula::getDuracion() const
{
    return duracion;
}

bool Pelicula::getEstreno() const
{
    return estreno;
}

const string &Pelicula::getHora() const
{
    return hora;
}

