#include <iostream>

using namespace std;

int main()
{
    cout<<"este es un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas"<<endl;
cout<<endl;
int numeros[100][100],fila,columnas;
cout<<"digite el numero de filas: "<<endl;
cin>>fila;
cout<<"ingrese el numero de columnas: "<<endl;
cin>>columnas;
//almacenar elementos en matris
for(int i=0;i<fila;i++){
    for(int j=0;j<columnas;j++){
        cout<<"digite un numero ["<<i<<"]["<<j<<"]:";
        cin>>numeros[i][j];
    }
}
//mostrando la matriz
for(int i=0;i<fila;i++){
    for(int j=0;j<columnas;j++){
        cout<<numeros[i][j];
    }
  cout<<endl;
}

    return 0;
}
