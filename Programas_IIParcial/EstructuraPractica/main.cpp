#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct empleado{
    char nombre[30];
    int ventas[3];
    double total, comis;
};
empleado empleados[5];

void ingresoArreglo(empleado empleados[]){
    int i =0, k=0;
    for (i=0;i<5;i++){
        cout<<"Nombre del empleado:  ";
        cin.getline(empleados[i].nombre, 30);
        for (k=0;k<3;k++){
            cout<<"Ingrese Ventas: "<<k+1<<"...";
            cin>> empleados[i].ventas[k];
        }
        cout<<"\n";
        _flushall();
    }
    cout<<"\n";
}
void calcular (empleado empleados[]){
    int i = 0;
    int k = 0;
    for (i=0;i<5; i++){
              for (k=0;k<3;k++){
                    empleados[i].total += empleados[i].ventas[k];
        }
        empleados[i].comis = empleados[i].total *0.05;
    }
}
void presentar(empleado empleados[]){
    int i = 0;
    int k = 0;
    for (i=0;i<5; i++){
        cout<<"Empleado "<<empleados[i].nombre<<"\n";
        for (k=0;k<3;k++){
            cout<<"Venta "<<k+1<<": "<<empleados[i].ventas[k]<<"\n";
        }
        cout<<"Total ventas:  "<<empleados[i].total<<"\n";
        cout<<"Comision:   "<<empleados[i].comis<<"\n";
        cout<<"\n \n";
    }
}
int main()
{
    ingresoArreglo(empleados);
    calcular(empleados);
    presentar(empleados);
    return 0;
}
