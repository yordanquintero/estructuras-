#include <iostream>

using namespace std;

int main()
{
     cout<<"este es un programa para ver si es una vocal minuscula o no"<<endl;
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
    default:cout<<"NO es una vocal miniscula";break;
}

    return 0;
}
