#ifndef LISTADOBLE_H
#define LISTADOBLE_H
#include "NodoLD.h"
#include <iostream>
#include <string>

using namespace std;

class ListaDoble
{
    public:
        NodoLD *primero;
        NodoLD *ultimo;
        int tamanio;
        ListaDoble();
        void insertar(char);
        void eliminarUltimo();
        NodoLD *buscar(string);
        virtual ~ListaDoble();

    protected:

    private:
};

#endif // LISTADOBLE_H
