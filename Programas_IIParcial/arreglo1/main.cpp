#include <iostream>

using namespace std;
int int_array[10];

void arreglo (int int_array[]){
    for (int i=0; i<10; i++){
        cout<<"Ingrese Numero: ";
        cin>>int_array[i];
    }
    for (int i=0; i<10; i++){
        cout<<"Numero "<<i<<":"<<int_array[i]<<"\n";
    }



}



int main()
{
    arreglo(int_array);


    return 0;
}
