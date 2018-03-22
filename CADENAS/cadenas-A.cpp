#include <iostream>
using namespace std;

int main()
{
    char cadena[20];
    int longitud=0,contador=0;
 cout<<"digite una cadena de caracteres"<<endl;
fgets(cadena,20,stdin);
cout<<endl;
for (int i=0;i<20;i++){
if (cadena[i] == '\n'){
        break;

}
    contador++;
}
longitud=contador;
cout<<longitud<<endl<<endl;
if (longitud<=10){
        cout<<cadena<<endl;
}else{
 cout<<"supera los 10 caracteres"<<endl;
 }



    return 0;
}

