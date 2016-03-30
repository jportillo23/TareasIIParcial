#include <iostream>

using namespace std;

int numero[4];

void ingreso (int numero[]){
        int i;

        for (i=0; i<5;i++){
            cout<<"Ingresar Numero: ";
            cin>>numero[i];
        }
        for (i=0; i<5;i++){
            int cont = i+1;
            cout<<"Numero "<<cont<<": "<<numero[i]<<"\n";
        }
}

float sacarPromedio(int numero[]){
    int i;
    float suma;
    float prom=0;
    float pares;
    for (i=0; i<5;i++){
        if (numero[i]%2!=0){
            pares ++;
            suma += numero[i];
        }
    }
    prom = suma / pares;
    return prom;
}

int contarRango (int numero[]){
    int i;
    int rango=0;

    for (i=0; i<5;i++){

        if (numero[i]>=50 && numero[i]<=100){
            rango ++;
        }
    }
    return rango;
}


int main()
{
    ingreso(numero);
    cout<<"El promedio es: "<<sacarPromedio(numero)<<"\n";
    cout<<"Hubieron: "<<contarRango(numero)<<" numeros entre 50 y 100. \n";
    return 0;
}
