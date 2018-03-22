#include <iostream>

using namespace std;

int main()
{
    int resultado,n,i=1;
cout<<"este es un programa para sacar la tabla de multiplicar "<<endl;
cout<<endl;
cout<<"ingrese el numero de la tabla: "<<endl;
cin>>n;
do{
    resultado=n*i;
    cout<<n<<" x "<<i<<" = "<<resultado<<endl;
    i++;
}while(i<=10);
    return 0;
}
