#ifndef NODOLD_H
#define NODOLD_H
#include<iostream>
#include<string>
using namespace std;

class NodoLD
{
    public:
        NodoLD *siguiente;
        NodoLD *anterior;
        char caracter;
        NodoLD(char);
        virtual ~NodoLD();

    protected:

    private:
};

#endif // NODOLD_H
