#include "ListaDoble.h"

ListaDoble::ListaDoble()
{
    primero = 0;
    ultimo = 0;
    tamanio = 0;
}

void ListaDoble:: insertar(char c){
    NodoLD *nuevo = new NodoLD(c);
    if(tamanio == 0){
        primero = ultimo = nuevo;
    }else{
        nuevo->siguiente = primero;
        primero->anterior = nuevo;
        primero = nuevo;
    }
    tamanio++;
    cout<< "Nodo agregado"<<endl;
}

void ListaDoble:: eliminarUltimo(){
    ultimo = ultimo->anterior;
    ultimo->siguiente = 0;
    cout<< "Nodo eliminado"<<endl;
}

NodoLD *ListaDoble::buscar(string palabra){
    NodoLD *aux = primero;
    NodoLD *retornado = 0;
    int c = palabra.size();
    bool encontrado = true; //
    int i = 0;
    while(i<tamanio && encontrado){
        if(palabra[0]==aux->caracter){
            retornado = aux;
            int j = 1;
            while(j<c && encontrado){
                if(palabra[i]!=aux->caracter){
                    encontrado = false;
                }
                aux = aux->siguiente;
                j++;
            }
            i+= c;
        }else{
            i++;
            encontrado = true;
        }
        aux = aux->siguiente;
    }
    return retornado;
}
ListaDoble::~ListaDoble()
{
    //dtor
}
