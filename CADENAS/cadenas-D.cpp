#include <iostream>

using namespace std;

int main()
{
    char cadena[]="buenos dias";
    char nombre[20];
    cout<<"¿cual es tu nombre? "<<endl;
    fgets(nombre,20,stdin);
    cout<<cadena<<" "<<nombre<<endl;
    return 0;

}
