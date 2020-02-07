#include <iostream>
#include "ListaSimple.cpp"

using namespace std;

int main()
{
    NodoLista *lista = NULL;
    cout<<insertar(lista,1,"Gaby")<<endl;
    cout<<insertar(lista,2,"Ale")<<endl;
    cout<<insertar(lista,3,"Vicky")<<endl;
    cout<<insertar(lista,4,"Olga")<<endl;
    cout<<insertar(lista,5,"Ana")<<endl; //lista->5,4,3,2,1
    if(buscar(lista,3) != NULL){
        cout<<"Nodo Encontrado"<<endl;
    }else{
        cout<<"No existe ese nodo"<<endl;
    }

    cout<<eliminar(buscar(lista,3))<<endl;
    if(buscar(lista,2) != NULL){
        cout<<"Nodo Encontrado"<<endl;
    }else{
        cout<<"No existe ese nodo"<<endl;
    }
    return 0;
}
