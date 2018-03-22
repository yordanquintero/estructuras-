#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa calcula si existe algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector"<<endl;
cout<<endl;
int numeros[5] = {1,2,3,4,10};
	int suma=0,mayor=0;

	for(int i=0;i<5;i++){
		suma=suma+numeros[i];

		if(numeros[i]>mayor){
			mayor = numeros[i];
		}
	}
	if(mayor == suma-mayor){
		cout<<"El numero "<<mayor<<" es la suma de los demas";
		}
		else{
		cout<<"No existe ningun numero que sea la suma de los demas";
	}
    return 0;
}
