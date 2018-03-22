#include <iostream>

using namespace std;

int main()
{
     int nota1,nota2,nota3,todos=0,ultimo=0,uno=0;
    int i;
for(i=1;i<=3;i++){
        cout<<"este es un programa que calcula las estadisticas de las notas"<<endl;
        cout<<endl;
    cout<<"ingrese la nota 1: "<<endl;
        cin>>nota1;
    cout<<"ingrese la nota 2: "<<endl;
        cin>>nota2;
    cout<<"ingrese la nota 3: "<<endl;
        cin>>nota3;
    if ((nota1>=5)&&(nota2>=5)&&(nota3>=5)){
        todos++;
    }
else if((nota1>=5) || (nota2>=5) || (nota3>=5)){
			uno++;
		}
		else if((nota1<5) && (nota2<5) && (nota3>=5)){
			ultimo++;
		}
}
cout<<"aprobo todos los examenes: "<<todos<<endl;
cout<<"aprobo almenos un examen: "<<uno<<endl;
cout<<"aprobo unicamente el ultimo examen: "<<ultimo<<endl;

    return 0;
}
