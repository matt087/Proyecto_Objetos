#include "factura.h"

Factura::Factura()
{
    this->nombre="Consumidor Final";
    this->cedula="0000000000";
    this->fecha="28/11/2022";
    this->telefono="0000000000";
    this->subtotal=0;
}

Factura::Factura(string n, string c, string f, string t, float to) : nombre(n), cedula(c), fecha(f), telefono(t), subtotal(to){}

const string &Factura::getNombre() const
{
    return nombre;
}

void Factura::setNombre(const string &newNombre)
{
    nombre = newNombre;
}

const string &Factura::getCedula() const
{
    return cedula;
}

void Factura::setCedula(const string &newCedula)
{
    cedula = newCedula;
}

const string &Factura::getFecha() const
{
    return fecha;
}

void Factura::setFecha(const string &newFecha)
{
    fecha = newFecha;
}

const string &Factura::getTelefono() const
{
    return telefono;
}

void Factura::setTelefono(const string &newTelefono)
{
    telefono = newTelefono;
}

float Factura::getSubtotal() const
{
    return subtotal;
}

void Factura::setSubtotal(float newSubtotal)
{
    subtotal = newSubtotal;
}

float Factura::getTotal() const
{
    return total;
}

void Factura::setTotal(float newTotal)
{
    total = newTotal;
}

void Factura::imprimir_factura()
{
    this->setSubtotal(3.15*num_boleto);
    cout<<"\nMI CINE";
    cout<<"\t\t\tFactura: "<<this->NUM_FACTURA<<endl;
    cout<<"Dirección: Av. Isabel La Católica N. 23-52 y Madrid"<<endl;
    cout<<"Teléfono: 0998447486";
    cout<<"  Fecha: "<<this->fecha<<endl;
    cout<<"Página Web: www.micine.com.ec"<<endl;
    cout<<"\nDatos Cliente:"<<endl;
    cout<<"Nombres: "<<this->nombre<<endl;
    cout<<"C.I: "<<this->cedula<<endl;
    cout<<"Teléfono: "<<this->telefono<<endl;
    cout<<"\n------------------------------------------------\n";
    cout<<"Cantidad de boletos\tPrecio Unitario\tImporte"<<endl;
    cout<<"\t "<<this->num_boleto<<"\t\t     $3.15\t $"<<this->subtotal<<endl;
    cout<<"------------------------------------------------\n";
    cout<<"\t\t\t       Subtotal: $"<<this->subtotal<<endl;
    cout<<"\t\t\t      IVA (12%): $"<<this->subtotal*0.12<<endl;
    cout<<"\t\t\t          Total: $"<<this->subtotal+(subtotal*0.12)<<endl;
    NUM_FACTURA++;

}
