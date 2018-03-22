#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa que muestra el orden inverso de un vector"<<endl;
    cout<<endl;
	int  i, numeros []={1,2,3,4,5};
	cout<<"El vector original es: "<<endl;
	for(i=0; i<5; i++){
		numeros[i];
			cout<<numeros[i]<<endl;
	}
	cout<<"El vector inverso es: "<<endl;
	for(i=4; i>=0; i--){
		cout<<numeros[i]<<endl;
	}
    return 0;
}
