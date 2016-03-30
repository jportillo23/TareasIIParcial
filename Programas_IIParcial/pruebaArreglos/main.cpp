#include <iostream>

using namespace std;
int numero[4];
int maximo;
int prom;
int menor=100000;


void ingreso (int numero[]){
        int i=0;
        for (i=0; i<5;i++){
            do{
                cout<<"Ingresar Numero "<<i+1<<":  ";
                cin>>numero[i];
            }while(!((numero[i]%2==0) && (numero[i]>50)));
        }
}
int mayorArreglo (int numero[]){
    int i = 0;
    int mayor =0;
    for (i=0; i<5;i++){
        if (numero[i]>mayor){
            mayor = numero[i];
        }
    }
    return mayor;
}
int promedioArreglo(int numero[]){
    int i = 0;
    int cont =0;
    int suma = 0;
    int promedio = 0;
    for (i=0; i<5;i++){
        if (numero[i]%5==0){
            cont++;
            suma += numero[i];
        }
    }
    if (cont>0){
        promedio = suma/cont;
    }
    else {
        promedio = 0;
    }
    return promedio;
}

void menorArreglo (int numero[], int &menor){
    int i = 0;
    for (i=0; i<5;i++){
        if (numero[i]<menor){
            menor = numero[i];
        }
    }

}
int main()
{
    ingreso(numero);
    int maximo = mayorArreglo(numero);
    int prom = promedioArreglo(numero);
    menorArreglo(numero, menor);
    cout<<"Numero Mayor: "<<maximo<<"\n";
    cout<<"Promedio: "<<prom<<"\n";
    cout<<"Numero Menor: "<<menor<<"\n";
    return 0;
}
