#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int matriz[100][100],filas,columnas;
	int matriz2[100][100],dato=0;

	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;

	srand(time(NULL));

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			dato = 1+rand()%(100);
			matriz[i][j] = dato;
		}
	}

	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = matriz[i][j];
		}
	}


	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<matriz2[i][j]<<"  ";
		}
		cout<<"\n";

}
    return 0;
}
