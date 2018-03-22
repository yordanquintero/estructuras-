#include <iostream>

using namespace std;

int main()
{
    cout<<"este es un programa para calcular la temperatura media"<<endl;
cout<<endl;
int i;
double temperatura,tempalta=0,tempbaja=100000,tempmedia=0;
for (i=0;i<=6;i++){
    cout<<"ingrese temperatura"<<endl;
    cin>>temperatura;
    tempmedia+=temperatura;
    if(temperatura>tempalta){
       tempalta=temperatura;
       }if(temperatura<tempbaja){
       tempbaja=temperatura;
       }
}
tempmedia/=6;
cout<<"la temperatura media: "<<tempmedia<<endl;
cout<<"temperatura mas alta: "<<tempalta<<endl;
cout<<"temperatura mas baja: "<<tempbaja<<endl;

    return 0;
}
