#include <iostream>

using namespace std;

int main(){
    int comparacion=0;
    char cadena[20],cadena2[20];
    int longitud=0;
    cout<<"este es un programa para saber si una palabra es palindroma o no"<<endl<<endl;

    cout<<"ingrese una cadena: ";
    fgets(cadena,20,stdin);
    for(int i=0;i<20;i++){
        if(cadena[i]=='\n'){

            break;

        }
longitud++;
    }
    cout<<longitud<<endl;
   for(int i=longitud;i>=0;i--){

    cadena2[longitud-1-i]=cadena[i];

   }
cout<<cadena2<<endl;
for(int i=0;i<longitud;i++){
    if(cadena[i]!=cadena2[i])
            comparacion=1;

}
  if (comparacion==1){
                cout<<"no es palindroma"<<endl;
    }else{
       cout<<"si es palindroma"<<endl;
    }

    return 0;
}
