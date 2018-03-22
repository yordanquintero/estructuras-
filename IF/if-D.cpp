#include <iostream>

using namespace std;

int main()
{
     int  numero;
    cout<<"este es un programa para comprovar si el numero es positivo o negativo"<<endl;
    cout<<endl;
    cout<<"ingrese un numero para determinar si es positivo o negativo"<<endl;
    cin>>numero;
    if (numero==0){
        cout<<"el cero es un numero nulo"<<endl;
    }else{
        if(numero>0){
            cout<<"el numero es positivo"<<endl;

        }else{
            cout<<"el numero es negativo"<<endl;
        }
    }
    return 0;
}
