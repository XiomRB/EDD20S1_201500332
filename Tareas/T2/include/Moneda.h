#ifndef MONEDA_H
#define MONEDA_H
#include "NodoM.h"
#include <string>
#include <iostream>

using namespace std;

class Moneda
{
    public:
        string nombre;
        int total;
        int monedero;
        NodoM *primero;
        Moneda();
        void crear();
        void nombrar();
        void contar();
        int contar_duenio(int prop);
        void tranferir();
        void trasferir_duenios();
        virtual ~Moneda();
};

#endif // MONEDA_H
