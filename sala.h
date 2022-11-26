#ifndef SALA_H
#define SALA_H


class Sala
{
public:
    Sala();
    Sala(int);
    void imprimir_asientos();
    bool get_asiento(int, int);
    void set_asiento(int, int);
    char getfila(int);
    int getcolumna(int);

private:
    int numero;
    bool asientos[5][5];
    char filas[5];
};

#endif // SALA_H
