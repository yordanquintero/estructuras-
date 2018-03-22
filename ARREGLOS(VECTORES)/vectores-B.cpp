#include <iostream>

using namespace std;

int main()
{
    cout<<"este programa multiplicara los elementos del vector"<<endl;
    cout<<endl;
	int vec[]= {1,2,3,4,5,6};
	int mult=1;
	for(int i=0; i<5; i++){
		mult*=vec[i];
	}
	cout<<"El resultado de la multiplicacion de los elementos del vector es: "<<mult<<endl;

    return 0;
}
