#include <iostream>

using namespace std;

int main()
{
     cout<<"este es un programa que calcula los resultados de la exprecion 1-2+3-4+5-6...n"<<endl;
    cout<<endl;
int i,n,j,resultado1=0,resultado2=0,neg,suma;
cout<<"ingrese un limite ";
cin>>n;
for (i=0;i<n;i++){

    i=i+1;
    resultado1=resultado1+1;
}
for (j=1;j<n;j++){
    j=j+1;
    neg=j*(-1);
    resultado2=resultado2+neg;


}
suma=resultado1+resultado2;
cout<<"el resultado final es "<<suma<<endl;


    return 0;
}
