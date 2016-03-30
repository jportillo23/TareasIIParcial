#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct alumno{
    char nombre[30];
    int p1, p2, p3, prom;
    char obs[15];
};
alumno alum;

void ingreso(alumno &alum){
    cout<<"Nombre del alumno:  ";
    cin.getline(alum.nombre, 30);
    cout<<"Parcial 1: ";
    cin>> alum.p1;
    cout<<"Parcial 2: ";
    cin>> alum.p2;
    cout<<"Parcial 3: ";
    cin>> alum.p3;
}
void calcular (alumno &alum){
    alum.prom=(alum.p1+alum.p2+alum.p3)/3;
    if (alum.prom>=60){
        strcpy(alum.obs,"Aprobado");
    }
    else {
        strcpy(alum.obs,"Reprobado");
    }
}
void presentar(alumno alum){
    cout<<"Alumno: "<<alum.nombre<<"  Nota:"<<alum.prom<<"  Observacion: "<<alum.obs<<"\n";
}

int main()
{
    ingreso(alum);
    calcular(alum);
    presentar(alum);

    return 0;
}
