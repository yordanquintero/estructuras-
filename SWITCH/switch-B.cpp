#include <iostream>

using namespace std;

int main()
{
 cout<<"este es un programa para saber si una vocal es minuscula, mayuscula o no es una vocal"<<endl;
 cout<<endl;
  char letra;
cout<<"ingrese un caracter: "<<endl;
cin>>letra;
switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':cout<<"es una vocal miniscula";break;
    case 'A':cout<<"NO una vocal miniscula";break;
    case 'E':cout<<"NO una vocal miniscula";break;
    case 'I':cout<<"NO una vocal miniscula";break;
    case 'O':cout<<"NO una vocal miniscula";break;
    case 'U':cout<<"NO una vocal miniscula";break;
    default:cout<<"NO es una vocal ";break;
}
    return 0;
}
