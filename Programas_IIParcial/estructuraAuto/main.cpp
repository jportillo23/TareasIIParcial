#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct datos{
    char carro[15];
    int v1, v2, v3, mayor, menor;
};
datos dato[5];

void ingreso(datos &dato){
    cout<<"Nombre del carro:  ";
    cin.getline(dato.carro, 15);
    cout<<"Velocidad 1: ";
    cin>> dato.v1;
    cout<<"Velocidad 2: ";
    cin>> dato.v2;
    cout<<"Velocidad 3: ";
    cin>> dato.v3;
    _flushall();
}
void ingresoArreglo(datos dato[]){
    int i =0;
    for (i=0;i<5;i++){
        ingreso(dato[i]);
    }
}
void presentar(datos dato){
    cout<<"Nombre: "<<dato.carro<<" Velocidad 1:"<<dato.v1<<" Velocidad 2:"<<dato.v2<<" Velocidad 3:"<<dato.v3<<" Velocidad Mayor:"<<dato.mayor<<" Velocidad Menor:"<<dato.menor<<"\n";
}
void presentarArreglo (datos dato[]){
    int i =0;
    for (i=0; i<5;i++){
        presentar(dato[i]);
    }
}
int main()
{
   ingresoArreglo(dato);
//    calcularArreglo(dato);
    presentarArreglo(dato);
    return 0;
}
