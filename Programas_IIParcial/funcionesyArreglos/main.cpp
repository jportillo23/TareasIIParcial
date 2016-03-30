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

    for (i=0; i<5;i++){
        suma += numero[i];
    }
    prom = suma / 5;
    return prom;
}

int contarPares (int numero[]){
    int i;
    int pares=0;

    for (i=0; i<5;i++){
        if (numero[i]%2==0){
            pares ++;
        }
    }
    return pares;
}


int main()
{
    ingreso(numero);
    cout<<"El promedio es: "<<sacarPromedio(numero)<<"\n";
    cout<<"Hubieron: "<<contarPares(numero)<<" numero pares. \n";

    return 0;
}
