#include <iostream>

using namespace std;

int main()
{
  cout<<"este es un programa para sumar los elementos de un vector"<<endl;
cout<<endl;
	int numero[] = {1,2,3,4,5,6};
	int suma = 0;
	for(int i=0; i<6; i++){
		suma+=numero[i];
	}
		cout<<"La suma de los valores del vector es "<<suma<<endl;

    return 0;
}
