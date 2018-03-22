#include <iostream>

using namespace std;

int main()
{
    int suma=0,contador,n;
cout<<"este es un programa que lee numeros hasta que lea numeros en el rango de [20-30] o el valor de 0 y suma los valores mayores de 0"<<endl;
cout<<endl;
do{ cout<<"ingrese un numero: "<<endl;
    cin>>n;
    if(n>0){
    suma+=n;
    }
}while(n!=0 && (n<20 || n>30));
cout<<"la suma de los numeros es: "<<suma-n<<endl;

    return 0;
}
