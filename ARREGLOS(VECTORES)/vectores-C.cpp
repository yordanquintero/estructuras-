#include <iostream>

using namespace std;

int main()
{
  cout<<"este es un programa que lee un vector de numeros y muestra en la salida estandar los numeros del vector con sus indices"<<endl;
cout<<endl;
int i, n, numeros [100];
	cout<<"Ingrese la cantidad de elementos del vector ";
	cin>>n;
	for( i=0; i<n; i++){
		cout<<"Ingrese un numero: ";
		cin>>numeros[i];
	}

	for (i=0; i<n; i++){
		cout<<numeros[i]<<" En la posicion --> "<<i<<endl;
	}
    return 0;
}
