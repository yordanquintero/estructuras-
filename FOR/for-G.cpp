#include <iostream>

using namespace std;

int main()
{
   cout<<"este es un programa para calcular la descomposicion en factores primos de un numero entero"<<endl;
    cout<<endl;
    int i,n=1,fa;
    cout<<"ingrese un numero: ";
    cin>>n;
    cout<<n<<" = ";
    for(int i=2;n>1;i++){
       while(n%i==0){
        n/=i;
        cout<<i<<" x ";
       }
    }
    return 0;
}
