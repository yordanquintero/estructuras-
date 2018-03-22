#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa que determina si una matriz es simetrica o no "<<endl;
cout<<endl;
int numeros[100][100],filas,columnas;
	char band='F';

	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;


	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}


	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]){
					band='V';
				}
			}
		}
	}

	if(band=='V'){
		cout<<"\nEs una matriz simetrica"<<endl;
	}
	else{
		cout<<"\nNo es una matriz simetrica"<<endl;
	}

    return 0;
}
