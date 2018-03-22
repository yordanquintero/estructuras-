#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa para sacar la serie de fibonacci"<<endl;
cout<<endl;
int n,x=0,y=1,z=1;
int i=0;
cout<<"ingrese un numero para hacer la seria fibonacci: ";
cin>>n;
cout<<"1 ";
while(i<n){
    z=x+y;
    cout<<z<<" ";
    x=y;
    y=z;
    i++;
}

    return 0;
}
