#include <iostream>

using namespace std;

int main()
{
    int total,valor_dolar,cantidad_dolar;
    cout<<"este es un programa para ver el dinero en dolar "<<endl;
    cout<<endl;
    cout<<"ingrese el valor del dolar"<<endl;
    cin>>valor_dolar;
    cout<<"ingrese la cantidad de dolares"<<endl;
    cin>>cantidad_dolar;
    total=valor_dolar*cantidad_dolar;
    cout<<"-------------------------------"<<endl;
    cout<<"el dinero total en dolares es: "<<total;

    return 0;
}
