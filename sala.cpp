#include <iostream>

#include "sala.h"

using namespace std;

Sala::Sala()
{
    this->numero=0;
    for(int i=0;i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            asientos[i][j] = false;
        }
    }
}

Sala::Sala(int n) : numero(n)
{
    for(int i=0;i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            asientos[i][j] = false;
        }
    }
    for(int i=0; i<5; i++)
    {
        if(i==0)
            filas[i] = 'A';
        else if(i==1)
            filas[i] = 'B';
        else if(i==2)
            filas[i] = 'C';
        else if(i==3)
            filas[i] = 'D';
        else if(i==4)
            filas[i] = 'E';
    }
}

char Sala::getfila(int i)
{
    return filas[i];
}

void Sala::imprimir_asientos()
{
    string ocupado = "0  ";
    for(int i=0;i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i==0)
            {
                 if(asientos[i][j]==false)
                 {
                     if(j==0)
                     {
                         cout<<"A  "+ocupado;

                     }
                     else if (j>0 && j<4)
                        cout<<ocupado;
                     else
                        cout<<ocupado<<endl;
                 }
            }

            if(i==1)
            {
                if(asientos[i][j]==false)
                {
                    if(j==0)
                    {
                        cout<<"B  "+ocupado;

                    }
                    else if (j>0 && j<4)
                       cout<<ocupado;
                    else
                       cout<<ocupado<<endl;
                }
           }

            if(i==2)
            {
                if(asientos[i][j]==false)
                {
                    if(j==0)
                    {
                        cout<<"C  "+ocupado;

                    }
                    else if (j>0 && j<4)
                       cout<<ocupado;
                    else
                       cout<<ocupado<<endl;
                }
            }

            if(i==3)
            {
                if(asientos[i][j]==false)
                {
                    if(j==0)
                    {
                        cout<<"D  "+ocupado;

                    }
                    else if (j>0 && j<4)
                       cout<<ocupado;
                    else
                       cout<<ocupado<<endl;
                }
            }

            if(i==4)
            {
                if(asientos[i][j]==false)
                {
                    if(j==0)
                    {
                        cout<<"E  "+ocupado;

                    }
                    else if (j>0 && j<4)
                       cout<<ocupado;
                    else
                       cout<<ocupado<<endl;
                }
            }

        }
    }
}

bool Sala::get_asiento(int i, int j)
{
    return asientos[i][j];
}


