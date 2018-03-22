#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   cout<<"este es un programa para determinar el area de la circunferencia "<<endl;
cout<<endl;
float pi,cir,radio,diam,lon,area;
pi=3.1415;
cout<<"ingrese el valor de radio de una circunferencia"<<endl;
cin>>radio;
cir=radio;
area=pi*pow(radio,2);
lon=2*pi*radio;
diam=lon/pi;
cout<<"la circunferencia con radio es: "<<radio<<endl;
cout<<"el area de la circunferencia es: "<<area<<endl;
cout<<"el diametro de la circunfernecia es: "<<diam<<endl;
cout<<"la longitud de la circunferencia es: "<<lon<<endl;



    return 0;
}
