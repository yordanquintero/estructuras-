#include <iostream>

using namespace std;

int main()
{
    cout<<"este es un programa que pasa los 2 primeros vectores a un tercer vector"<<endl;
    cout<<endl;
   	char vector1[]= {'h', 'o', 'l', 'a'};
   	char vector2[]= {'m', 'u', 'n', 'd', 'o'};
   	char vectorfinal[10];

   	for(int i=0; i<5; i++){
   		vectorfinal[i] = vector1[i];
	   }

	for(int i=5; i<10; i++){
		vectorfinal[i]=vector2[i-5];
	}

	for(int i=0; i<10; i++)
	cout<<vectorfinal[i];

    return 0;
}
