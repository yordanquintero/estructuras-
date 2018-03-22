#include <iostream>

using namespace std;

int main()
{
   int num1,num2,num3,num4;
    cout<<"este es un programa para indicar si el cuarto numero coincide con los 3 primeros "<<endl;
    cout<<endl;
    cout<<"ingrese tres numeros "<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cout<<"ahora ingrese un cuarto numero "<<endl;
    cin>>num4;
    if (num4==num1){
    cout<<"el numero que coincie es  "<<num1<<endl;
    }else{
        if (num4==num2){
            cout<<"el numero que coicide es "<<num2<<endl;

        }else{
        if (num4==num3){
            cout<<"el numero que coincide es "<<num3<<endl;
        }else{
        cout<<"ningun numero coincide "<<endl;}
        }

    }

    return 0;
}
