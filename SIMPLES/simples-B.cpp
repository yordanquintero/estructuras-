#include <iostream>

using namespace std;

int main()
{
    float base,altura;
    float area;
    cout<<"este es un programa para calcular el area"<<endl;
    cout<<endl;
    cout<<"ingrese la base "<<endl;
    cin>>base;
    cout<<"ingrese la altura"<<endl;
    cin>>altura;
    area=(base*altura)/2;
    cout<<"triangulo con base = "<<base<<" | "<<"altura"<<" = "<<altura<<endl;
    cout<<endl;
    cout<<"Area del triangulo"<<" = "<<area<<endl;

    return 0;
}
