#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int numero=0;
int arreglo[5];
int menor=0;
int mayor=0;

int generarNumero(){
    int numero = rand() % 100 + 50;
    return numero;
}
void llenarArreglo(int arreglo[]){
    for(int i=0; i<5; i++){
        arreglo[i] = generarNumero();
    }
}
void DevolverMayorMenor(int arreglo[], int &mayor, int &menor){
    mayor = arreglo[0];
    menor = arreglo[0];

    for(int i=0; i<5; i++){
        if(mayor < arreglo[i]){
            mayor = arreglo[i];
        }
    }
    for(int i=0; i<5; i++){
        if(menor > arreglo[i]){
            menor = arreglo[i];
        }
    }
}
void mostrarNumeros(int arreglo[]){
    for(int i=0; i<5; i++){
        cout<<"Numero "<<arreglo[i]<<"\n";
    }
}
int main()
{
    srand(time(0));

    llenarArreglo(arreglo);
    DevolverMayorMenor(arreglo, mayor, menor);
    mostrarNumeros(arreglo);
    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Menor: "<<menor<<endl;
    return 0;
}
