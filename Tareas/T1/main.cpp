#include <iostream>

using namespace std;
void crearmatriz(int tam);
int main()
{
    int tamanio;
    cout << "De que tamanio desea la matriz? ";
    cin>>tamanio;
    crearmatriz(tamanio);
    return 0;
}

void crearmatriz(int tam){
    char matriz[tam][tam];
    for(int i=0;i<tam;i++){
        matriz[i][0] = matriz[0][i] = '1'; //en toda la fila 0 y columna 0colocar 1's
        matriz[i][tam-1] =  matriz[tam-1][i] = '1'; //en toda la ultima fila y ultima columna colocar 1's
        for(int j=0;j<tam;j++){
            if(matriz[i][j]!='1')matriz[i][j]= ' '; //en las que no tenga 1's colocar espacio
        }
    }
    //mostrar matriz
    for(int i=0;i<tam;i++){
        cout<<" ";
        for(int j=0;j<tam;j++){
            cout<<matriz[i][j]<<" | ";
        }
        cout<<"\n";
    }
}
