#include <iostream>
#include "ListaDoble.h"
#include "NodoLD.h"
#include <conio.h>
using namespace std;


int main()
{
    ListaDoble lista;
    lista.insertar('y');
    lista.insertar('b');
    lista.insertar('a');
    lista.insertar('g');
    NodoLD *encontrado = lista.buscar("by");
    if(encontrado != 0){
        cout<< encontrado->caracter;
    }else cout<< "No se encontro el nodo";
    return 0;
}
