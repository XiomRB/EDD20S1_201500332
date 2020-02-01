#include "Moneda.h"

Moneda::Moneda()
{
    primero = NULL;
    total =0;
    monedero = 0;
}

void Moneda::crear(){
    NodoM *nuevo = new NodoM();
    if(primero == NULL) primero = nuevo;
    else primero->siguiente = nuevo;
    total++;
    monedero++;
    cout<<"Moneda creada"<<endl;
}

void Moneda::nombrar(){
    cout<<"Que nombre deseas darle a las monedas? ";
    getline(cin,nombre);
    cout<<"Las monedas han sido nombradas como "<<nombre<<endl;
}

void Moneda::contar(){
    cout<<"El total de monedas es: "<<total<<endl;
}

int Moneda::contar_duenio(int prop){
    int cant;
    if(prop != 0){
        NodoM *aux = primero;
        for(int i=0;i<total;i++){
            if(aux->duenio == prop) cant++;
            aux = aux->siguiente;
        }
    }
    return cant;
}

void Moneda::tranferir(){
    int cant,a;
    cout<<"Cuantas monedas desea transferir? ";
    cin>>cant;
    cout<<"A que dueño desea transferirle? (0 = monedero) ";
    cin>>a;
    if(cant<=monedero){
        NodoM *aux = primero;
        for(int i=0;i<cant;i++){
            if(aux->duenio==0){
                aux->duenio = a;
                monedero--;
            }
            aux = aux->siguiente;
        }
        cout<<"Monedas transferidas al dueño "<<a<<endl;
    }else cout<<"No hay monedas suficientes"<<endl;
}

void Moneda::trasferir_duenios(){
    int cant,a,from;
    cout<<"Que dueño desea hacer la transferencia? (0 = monedero) ";
    cin>>from;
    cout<<"Cuantas monedas desea transferir? ";
    cin>>cant;
    cout<<"A que dueño desea transferirle? (0 = monedero)";
    cin>>a;
    if(from != 0){
        if(cant <= contar_duenio(from)){
            NodoM *aux = primero;
            for(int i=0;i<total;i++){
                if(aux->duenio==from) aux->duenio = a;
                aux = aux->siguiente;
            }
        } else cout<<"No es posible hacer la transferencia"<<endl;
    }else cout<<"No es posible hacer la transferencia"<<endl;

}
Moneda::~Moneda()
{
    //dtor
}
