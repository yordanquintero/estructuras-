#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa que muestra la diagonal de una matriz 3x3"<<endl;
cout<<endl;
int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	cout<<"Mostrando Matriz completa\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}

	cout<<"\n\nMostrando diagonal principal de la matriz\n";

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<numeros[i][j]<<endl;
			}
		}
	}
    return 0;
}
