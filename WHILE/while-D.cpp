#include <iostream>

using namespace std;

int main()
{
    int b=0,n,suma=0;
while (b<=50){
    if(b%2==1){
       suma=suma+b;
    }
b++;
}
cout<<"la suma de los primeros 50 impares es: "<<suma<<endl;

    return 0;
}
