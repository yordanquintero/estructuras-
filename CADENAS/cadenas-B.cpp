#include <iostream>
using namespace std;

int main(){
    int const L=10;
    int longitud=0,contador=0;
    char cadena[L];
    char cadena2[L];
   cout <<"ingrese la cadena de caracteres "<< endl;
   fgets(cadena,10,stdin);
  for(int i=0; i<L;i++){
if (cadena[i]=='\n'){
    break;

}
contador++;

  }
  longitud=contador;
//pasar todo el contenido a la otra cadena
for(int i=0;i<longitud;i++){
    if(i<contador){

        cadena2[i]=cadena[i];

    }

}
cout<<cadena2;
    return 0;
}
