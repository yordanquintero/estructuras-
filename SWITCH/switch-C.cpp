#include <iostream>

using namespace std;

int main()
{
   int mes;
cout<<"este es un programa para saber el mes"<<endl;
cout<<endl;
cout<<"ingrese el numero del mes: ";
cin>>mes;
switch (mes){
    case 1:cout<<"el mes es: enero ";break;
    case 2:cout<<"el mes es: febrero";break;
    case 3:cout<<"el mes es: marzo";break;
    case 4:cout<<"el mes es: abril";break;
    case 5:cout<<"el mes es: mayo";break;
    case 6:cout<<"el mes es: junio";break;
    case 7:cout<<"el mes es: julio";break;
    case 8:cout<<"el mes es: agosto";break;
    case 9:cout<<"el mes es: septiembre";break;
    case 10:cout<<"el mes es: octubre";break;
    case 11:cout<<"el es es: noviembre";break;
    case 12:cout<<"el mes es: diciembre";break;
    default:cout<<"no es un numero valido";break;
}
    return 0;
}
