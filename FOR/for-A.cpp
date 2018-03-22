#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"este es un programa que muestra la suma de los 10 primeros enteros"<<endl;
    cout<<endl;
    int suma=0,i;
    for(i=1;i<=10;i++){
        suma=suma+pow(i,2);


    }
cout<<"la suma de los cuadrados de los 10 primeros enteros : "<<suma<<endl;

    return 0;
}
