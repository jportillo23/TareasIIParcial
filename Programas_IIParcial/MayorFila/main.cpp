#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
const int lin=3;
const int col=4;

int num[lin][col];

void ingreso (int num[lin][col]){
    srand(time(0));
    for (int l=0;l<lin; l++){
        for (int c=0; c<col-1; c++){
            num[l][c]= 1+rand() % (100-1);
        }
    }
}
void numMayor (int num[][col]){
    int ult = col-1;
    for (int l=0;l<lin; l++){
        int mayor = 0;
        for (int c=0; c<col-1; c++){
            if (num[l][c]>mayor){
                mayor = num[l][c];
            }
        num[l][ult]= mayor;
        }
    }
}

void presentar (int num[lin][col]){
    for (int l=0;l<lin; l++){
        for (int c=0; c<col; c++){
            cout<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    ingreso(num);
    numMayor(num);
    presentar(num);
    return 0;
}
