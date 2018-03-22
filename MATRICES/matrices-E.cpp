#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa que muestra lee una matriz de 3x3 y muestra su matriz traspuesta"<<endl;
cout<<endl;
int numeros[3][3];

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	cout<<"\nMatriz Normal\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\nMatriz Transpuesta\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[j][i]<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
