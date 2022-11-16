#include "cine.h"
#include "pelicula.h"
#include "sala.h"

Cine::Cine()
{
    while(peliculas_ingresadas<5)
    {
        if(peliculas_ingresadas==0)
            peliculas[peliculas_ingresadas] = Pelicula (1,"Lilo, Lilo, Cocodrilo",106,false,"11:30");
        else if(peliculas_ingresadas==1)
            peliculas[peliculas_ingresadas] = Pelicula(2,"One Piece Film Red",115,true,"13:20");
        else if(peliculas_ingresadas==2)
            peliculas[peliculas_ingresadas] = Pelicula(3,"Black Adam",125,false,"15:30");
        else if(peliculas_ingresadas==3)
            peliculas[peliculas_ingresadas] = Pelicula(4,"Halloween Ends",111,false,"17:45");
        else if(peliculas_ingresadas==4)
            peliculas[peliculas_ingresadas] = Pelicula(5,"El Exorcista",132,false,"19:30");
        peliculas_ingresadas++;
    }
}

void Cine::mostrarCartelera()
{
    cout<<"\n\t= = Cartelera = ="<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<peliculas[i].getId()<<".- ["<<peliculas[i].getHora()<<"] "<<peliculas[i].getTitulo()<<" ("<<peliculas[i].getDuracion()<<")";
        if(peliculas[i].getEstreno()==true)
            cout<<"*ESTRENO*"<<endl;
        else
            cout<<endl;
    }
}

void Cine::mostrarSala()
{
    int id;
    do
    {
        cout<<"\nIngrese el ID de la pelicula: ";
        cin>>id;
        if (id<1 || id>5)
            cout<<"ERROR!! El ID es invalido\n"<<endl;
    }while(id<1 || id>5);
    cout<<peliculas[id-1].getId()<<".- ["<<peliculas[id-1].getHora()<<"] "<<peliculas[id-1].getTitulo()<<" ("<<peliculas[id-1].getDuracion()<<")\n"<<endl;
    cout<<"\t= = Asientos = ="<<endl;
    Sala s(id);
    cout<<"   1  2  3  4  5"<<endl;
    s.imprimir_asientos();

}

void Cine::comprarBoletos()
{
    int id, num;
    string asiento;
    string posibilidades[] = {"a1","a2","a3","a4","a5","b1","b2","b3","b4","b5","c1","c2","c3","c4","c5","d1","d2","d3","d4","d5","e1","e2","e3","e4","e5"};
    bool compra;
    cout<<"\n\t= = Boleteria = ="<<endl;
    do
    {
        cout<<"Ingrese el ID de la pelicula: ";
        cin>>id;
        if (id<1 || id>5)
            cout<<"ERROR!! El ID es invalido\n"<<endl;
    }while(id<1 || id>5);
    do
    {
        cout<<"Ingrese el número de boletos: ";
        cin>>num;
        if(num==0)
        {
             cout<<"Compra cancelada!\n"<<endl;
             break;
        } else if(num<0)
            cout<<"ERROR: La cantidad ingresada es incorrecta\n"<<endl;
        else
        {
            Sala s(id);
            cout<<"Seleccione los asientos: "<<endl;
            s.imprimir_asientos();
            for(int i=0; i<num; i++)
            {
                do
                {
                    cin.ignore();
                    cout<<"BOLETO #"<<i+1<<endl;
                    cout<<"Ingrese el asiento: ";
                    cin>>asiento;
                    for(int j=0; j<25; j++)
                    {
                        compra = true;
                        if(asiento==posibilidades[j])
                        {
                            compra = false;
                            break;
                        }
                    }
                    if(compra==true)
                        cout<<"ERROR: El asiento ingresado no existe\n"<<endl;
                } while(compra==true);
            }
        }
    } while(num<0);
}

