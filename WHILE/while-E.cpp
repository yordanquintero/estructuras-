#include <iostream>

using namespace std;

int main()
{
   int num,i=1;
    long fact=1;
cout<<"este es un programa para sacar el factorial de un numero"<<endl;
cout<<endl;
cout<<"ingrese un numero para sacar su factorial"<<endl;
cin>>num;
while(i<=num){
   fact=fact*i;
    i++;
}
cout<<"el factorial es: "<<fact;
    return 0;
}
