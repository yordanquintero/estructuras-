#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int longitud2=0;
    int longitud=0;
    char cadena[20],cadena2[20];
    cout<<"ingrese 2 cadenas"<<endl;
    cout<<"cadena 1: ";
    fgets(cadena,20,stdin);
    cout<<"cadena 2: ";
    fgets(cadena2,20,stdin);
    //trate de comprar sin funciones
    for(int i=0;i<20;i++){
        if (cadena[i]=='\n'){
            break;
        }
       longitud++;
    }
 for(int i=0;i<20;i++){
        if (cadena2[i]=='\n'){
            break;
        }
       longitud2++;
    }
    //comparando usando la funcion string.h
      if (strcmp(cadena,cadena2)==0){

        cout<<"son iguales"<<endl;

      }else{if (strcmp(cadena,cadena2)>0){
cout<<"la mayor alfabeticamente es: "<<cadena;

      }else{
          cout<<"la mayor alfabeticamente es: "<<cadena2<<endl;
      }
      }
    return 0;
}
