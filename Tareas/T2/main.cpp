#include <iostream>
#include <conio.h>
#include "Moneda.h"
#include <stdlib.h>
using namespace std;

Moneda coin;
void menu();

int main()
{
    int m;
    cout << "Bienvenido" << endl;
    do{
        system("cls");
        menu();
        cout<<"Desea regresar al menu? \n 1. Si     2. No"<<endl;
        cin>>m;
    }while(m == 1);
    getch();
    return 0;
}

void menu(){
    int op,d;
    cout<< "Que opcion desea realizar?" << endl;
    cout<< " 1. crear Moneda \n 2. Ver cantidad total de monedas \n 3. Ver cantidad de monedas en el monedero \n 4. Ver cantidad de monedas de un duenio"<<endl;
    cout<< " 5. Tranferir monedas \n 6. Transferir monedas entre duenios \n 7. Salir"<<endl;
    cin>>op;
    system("cls");
    switch(op){
        case 1: coin.crear();
            break;
        case 2: coin.contar();
            break;
        case 3: cout<<"La cantidad de monedas en el monedero es: "<<coin.contar_duenio(0)<<endl;
            break;
        case 4: cout<< "Que dueño desea ver? ";
            cin>>d;
            cout<<"La cantidad de monedas del duenio "<<d<<" es: "<<coin.contar_duenio(d)<<endl;
            break;
        case 5: coin.tranferir();
            break;
        case 6: coin.trasferir_duenios();
            break;
        case 7: exit(0);
            break;
        default: cout<<"No es una opcion correcta"<<endl;
            break;
    }
}
