#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
cout<<"este es un programa para determinar el mayor de 3 numeros "<<endl;
cout<<endl;
cout<<"ingrese 3 numeros para sacar el mayor"<<endl;
cin>>num1;
cin>>num2;
cin>>num3;
if(num1>num2&&num1>num3){
  cout<<num1<<" es el mayor";
}else{
    if (num2>num1&&num2>num3){
        cout<<num2<<" es el mayor";
    }else{
        cout<<num3<<" es el mayor";
}
}

    return 0;
}
