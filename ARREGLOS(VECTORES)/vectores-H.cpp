#include <iostream>

using namespace std;

int main()
{
    cout<<"este es un programa que lee 5 numeros en un vector, los copia a otro vector y lo multiplica por 2 "<<endl;
    cout<<endl;
	int const L = 5;
	int i, vector1[L], vector2[L];

	for(i=0; i<L; i++){
		cout<<"Ingrese un numero: ";
		cin>>vector1[i];

	}
	cout<<"\nEl resultado de los numeros multiplicados por 2 es: "<<endl;
	for(i=0; i<L; i++){
		vector2[i]=vector1[i]*2;
		cout<<vector2[i]<<endl;
	}

    return 0;
}
