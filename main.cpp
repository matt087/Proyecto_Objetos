#include <iostream>

#include "cine.h"
using namespace std;

int Boleto::num_boleto=1;
int main()
{
    Cine c1;
    int opc;
    do
    {
        cout << "\t* * * MI CINE * * *"<<endl;
        cout<<"\n\t= = Menu Principal = ="<<endl;
        cout<<"1) Mostrar Cartelera"<<endl;
        cout<<"2) Mostrar Sala"<<endl;
        cout<<"3) Comprar Boletos"<<endl;
        cout<<"4) Salir"<<endl;
        do
        {
            cout<<"\nSeleccione una opción: ";
            cin>>opc;
            if (opc<1 || opc>4)
                cout<<"ERROR: La opción ingresada es incorrecta"<<endl;
        } while(opc<1 || opc>4);
        switch(opc)
        {
        case 1:
        {
            c1.mostrarCartelera();
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            c1.mostrarSala();
            system("pause");
            system("cls");
            break;
        }
        case 3:
            c1.comprarBoletos();
            system("pause");
            system("cls");
            break;
        }
    } while(opc!=4);
}
