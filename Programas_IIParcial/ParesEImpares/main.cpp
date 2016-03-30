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
int mayor (int numero[]){
    int i;
    int mayores=0;
    for (i=0; i<5;i++){
            cout<<"MAYOR";
        if (numero[i]>100){
            mayores++;
        }
    return mayores;
    }
}
int pares (int numero[]){
    int par=0;
    int i;
    for (i=0; i<5;i++){
        cout<<"PAR";
        if (numero[i]%2==0){
            par++;
        }
    return par;
    }
}
int impares (int numero[]){
    int impar=0;
    int i;
    for (i=0; i<=4;i++){
            cout<<"imPAR";
        if (numero[i]%2!=0){
            impar++;
    cout<<"imPAR2";
        }
    return impar;
    }
}



int main()
{
    ingreso(numero);
    cout<<"Impares: "<<impares(numero)<<"\n";
    cout<<"Pares: "<<pares(numero)<<"\n";
    cout<<"Mayores a 100: "<<mayor(numero)<<"\n";
    return 0;
}
