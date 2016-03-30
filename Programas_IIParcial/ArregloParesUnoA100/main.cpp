#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//funcion para generar entre 1-100
//meter a un arreglo 10 numeros enteros pares
//presentar el arreglo
//contar los mayores a 50 con una funcion

int numeros[9];

int numPar (){
    int num=0;
    do{
        num = 1 + rand()%100;
    } while (num%2!=0 or num>=100);
    return num;
}

void generar (int numeros[]){
    srand(time(0));
    for (int i=0; i<10; i++){
        numeros[i] = numPar();
    }
}
void presentar (int numeros[]){
    for (int i=0; i<10; i++){
        cout<<"Numero "<<i+1<<": "<<numeros[i]<<"\n";
    }
}




int contar (int numeros[]){
    int contador=0;
    for (int i=0; i<10; i++){
        if(numeros[i]>50){
                contador ++;
        }
    }
    return contador;
}

int main(){
    generar(numeros);
    presentar(numeros);
    cout<<"Numeros mayores a 50: "<<contar(numeros)<<"\n";

    return 0;
}
