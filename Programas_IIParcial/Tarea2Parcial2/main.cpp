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

double factorial (int numeros){
    int i, fac=1;

    for(i=0;i<numeros; i++){
        fac = fac * i;
    }
    return fac;

}

void presentarFactorial (int numero[]){
    int i=0;
    int facto;
    for (i=0; i<5; i++){
        facto = factorial (numero[i]);
        cout<<"Factorial de "<<numero[i]<<" es "<<facto<<"\n";

    }
}


int main()
{
    ingreso(numero);
    presentarFactorial(numero);
    return 0;
}
