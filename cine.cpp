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

    sala[0] = Sala(1);
    sala[1] = Sala(2);
    sala[2] = Sala(3);
    sala[3] = Sala(4);
    sala[4] = Sala(5);
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
    cout<<"\t= = Asientos = =\n"<<endl;
    cout<<"   1  2  3  4  5"<<endl;
    sala[id-1].imprimir_asientos();

}

void Cine::comprarBoletos()
{
    int id, num;
    string asiento;
    string posibilidades[] = {"a1","a2","a3","a4","a5","b1","b2","b3","b4","b5","c1","c2","c3","c4","c5","d1","d2","d3","d4","d5","e1","e2","e3","e4","e5","A1","A2","A3","A4","A5","B1","B2","B3","B4","B5","C1","C2","C3","C4","C5","D1","D2","D3","D4","D5","E1","E2","E3","E4","E5"};
    bool compra;
    int fila, columna;
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

            cout<<"Seleccione los asientos: "<<endl;
            sala[id-1].imprimir_asientos();
            for(int i=0; i<num; i++)  
            {
                do
                {
                    cout<<"\nBOLETO #"<<i+1<<endl;
                    cout<<"Ingrese el asiento: ";
                    cin>>asiento;
                    for(int j=0; j<50; j++)
                    {
                        compra = true;
                        if(asiento==posibilidades[j])
                        {
                            compra = false;
                            break;
                        }
                    }
                    if(compra==true)
                        cout<<"ERROR: El asiento ingresado no existe"<<endl;
                    else
                    {
                        if(asiento=="a1" || asiento=="A1")
                        {
                            fila = 0;
                            columna=0;
                        }
                        else if(asiento=="a2" || asiento=="A2")
                        {
                            fila = 0;
                            columna=1;
                        }
                        else if(asiento=="a3" || asiento=="A3")
                        {
                            fila = 0;
                            columna=2;
                        }
                        else if(asiento=="a4" || asiento=="A4")
                        {
                            fila = 0;
                            columna=3;
                        }
                        else if(asiento=="a5" || asiento=="A5")
                        {
                            fila = 0;
                            columna=4;
                        }
                        if(asiento=="b1" || asiento=="B1")
                        {
                            fila = 1;
                            columna=0;
                        }
                        else if(asiento=="b2" || asiento=="B2")
                        {
                            fila = 1;
                            columna=1;
                        }
                        else if(asiento=="b3" || asiento=="B3")
                        {
                            fila = 1;
                            columna=2;
                        }
                        else if(asiento=="b4" || asiento=="B4")
                        {
                            fila = 1;
                            columna=3;
                        }
                        else if(asiento=="b5" || asiento=="B5")
                        {
                            fila = 1;
                            columna=4;
                        }
                        if(asiento=="c1" || asiento=="C1")
                        {
                            fila = 2;
                            columna=0;
                        }
                        else if(asiento=="c2" || asiento=="C2")
                        {
                            fila = 2;
                            columna=1;
                        }
                        else if(asiento=="c3" || asiento=="C3")
                        {
                            fila = 2;
                            columna=2;
                        }
                        else if(asiento=="c4" || asiento=="C4")
                        {
                            fila = 2;
                            columna=3;
                        }
                        else if(asiento=="c5" || asiento=="C5")
                        {
                            fila = 2;
                            columna=4;
                        }
                        if(asiento=="d1" || asiento=="D1")
                        {
                            fila = 3;
                            columna=0;
                        }
                        else if(asiento=="d2" || asiento=="D2")
                        {
                            fila = 3;
                            columna=1;
                        }
                        else if(asiento=="d3" || asiento=="D3")
                        {
                            fila = 3;
                            columna=2;
                        }
                        else if(asiento=="d4" || asiento=="D4")
                        {
                            fila = 3;
                            columna=3;
                        }
                        else if(asiento=="d5" || asiento=="D5")
                        {
                            fila = 3;
                            columna=4;
                        }
                        if(asiento=="e1" || asiento=="E1")
                        {
                            fila = 4;
                            columna=0;
                        }
                        else if(asiento=="e2" || asiento=="E2")
                        {
                            fila = 4;
                            columna=1;
                        }
                        else if(asiento=="e3" || asiento=="E3")
                        {
                            fila = 4;
                            columna=2;
                        }
                        else if(asiento=="e4" || asiento=="E4")
                        {
                            fila = 4;
                            columna=3;
                        }
                        else if(asiento=="e5" || asiento=="E5")
                        {
                            fila = 4;
                            columna=4;
                        }
                        if(sala[id-1].get_asiento(fila, columna)==true)
                        {
                            cout<<"ERROR: El asiento ya está ocupado"<<endl;
                            compra = true;
                        }
                        else
                        {
                            sala[id-1].set_asiento(fila, columna);
                            compra = false;
                        }
                    }
                } while(compra==true);
            }
        }
    } while(num<0);
}

