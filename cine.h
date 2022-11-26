#ifndef CINE_H
#define CINE_H

#include "sala.h"
#include "pelicula.h"
#include "boleto.h"

class Cine
{
public:
    Cine();
    void mostrarCartelera();
    void mostrarSala();
    void comprarBoletos();
private:
    const float PRECIO_BOLETO=3.15;
    int peliculas_ingresadas=0;
    int boletos_comprados=0;
    Sala sala[5];
    Pelicula peliculas[5];
    Boleto boletos[125];
};

#endif // CINE_H
