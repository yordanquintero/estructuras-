#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   cout<<"este es un programa que saca el valor de 2^1+^2^2+2^3+...+2^n"<<endl;
cout<<endl;
int i,n,potencia,base,suma=0;
cout<<"ingrese un limite: ";
cin>>n;
base=2;
for(i=1;i<=n;i++){

    potencia=pow(base,i);
    suma=suma+potencia;
    cout<<"el resultado de la pontencia es : "<<base<<"^"<<i<<"="<<potencia<<endl;


}
cout<<"el resultado de la suma de las potencias es: "<<suma<<endl;


    return 0;
}
