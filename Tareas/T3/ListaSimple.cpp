#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;

struct NodoLista{
    string nombre;
    int carnet;
    NodoLista *sig;
};

bool vacia(NodoLista *&lista){
    if(lista == NULL){
        return true;
    }else{
        return false;
    }
}
string insertar(NodoLista *&lista,int c,string n){
    NodoLista *nuevo = new NodoLista();
    nuevo->carnet = c;
    nuevo->nombre = n;
    nuevo->sig = lista;
    lista = nuevo;
    return "Nodo insertado";
}

NodoLista *buscar(NodoLista *&lista,int c){
    NodoLista *aux = lista;
    if(aux!=NULL){
       while(aux->sig != NULL){
            if(aux->carnet == c){
                return aux;
            }
            aux = aux->sig;
        }
        return NULL;
    }else{
        return NULL;
    }
}

string eliminar(NodoLista *nodo){
    if(nodo!=NULL){
        cout<<nodo->carnet<<endl;
    cout<<nodo->sig->carnet<<endl;
        nodo->sig = NULL;
        return "Nodos eliminados";
    }else{
        return "No hay nodos que eliminar";
    }
}
