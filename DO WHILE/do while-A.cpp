#include <iostream>

using namespace std;

int main()
{
     cout<<"este es un programa que lee numeros hasta que ingrese 0 y dice la cantidad de numeros ingresados antes del cero"<<endl;
    cout<<endl;
  int n,contador=0;
  do{
    cout<<"ingrese un numero"<<endl;
    cin>>n;
    contador++;
  }while(n!=0);{
  cout<<"cantidad de numeros leidos: "<<contador-1<<endl;
  }
    return 0;
}
