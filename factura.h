#ifndef FACTURA_H
#define FACTURA_H

#include <iostream>

#include "boleto.h"
using namespace std;

class Factura : public Boleto
{
public:
    static int NUM_FACTURA;
    Factura();
    Factura(string, string, string, string, float);
    const string &getNombre() const;
    void setNombre(const string &newNombre);
    const string &getCedula() const;
    void setCedula(const string &newCedula);
    const string &getFecha() const;
    void setFecha(const string &newFecha);
    const string &getTelefono() const;
    void setTelefono(const string &newTelefono);
    float getSubtotal() const;
    void setSubtotal(float newSubtotal);
    float getTotal() const;
    void setTotal(float newTotal);
    void imprimir_factura();
private:
    string nombre;
    string cedula;
    string fecha;
    string telefono;
    float subtotal;
    float total;


};

#endif // FACTURA_H
