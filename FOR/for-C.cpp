#include <iostream>

using namespace std;

int main()
{
    int  suma=0,n,contador=0,i;
cout<<"este es un programa para calcular el valor de 1+2+3+...+n"<<endl;
cout<<endl;
cout<<"ingrese un numero"<<endl;
cin>>n;
for (i=1;i<=n;i++){
suma=suma+i;
}
cout<<"la suma de los numeros anterios es : "<<suma;

    return 0;
}
