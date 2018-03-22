#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa que lee un vector y muestra el mayor elemento del vector"<<endl;
cout<<endl;
int n, i, mayor=0, numeros[50];
	cout<<"Ingrese el numero de elementos del vector ";
	cin>>n;

	for(i=0; i<n; i++){
		cout<<i+1<<". Ingrese un numero ";
		cin>>numeros[i];

		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;

    return 0;
}
