#include <iostream>

using namespace std;

int main()
{
    int total_salario,total_festivo,porciento_festivo,valor_festivo,valor_domi,porciento_domi,total_domi,porciento_nocturna,total_nocturnas,valor_nocturna,total_diurna,hora_diurna,hora_nocturna,hora_domi,hora_festivo,valor_hora;
    cout<<"este es un programa para calcular el salario"<<endl;
    cout<<endl;
    cout<<"ingrese el valor de las horas"<<endl;
    cin>>valor_hora;
    cout<<"ingrese las horas diurnas"<<endl;
    cin>>hora_diurna;
    cout<<"ingrese las horas nocturnas"<<endl;
    cin>>hora_nocturna;
    cout<<"ingrese las horas dominicales"<<endl;
    cin>>hora_domi;
    cout<<"ingrese las horas festivos"<<endl;
    cin>>hora_festivo;
    total_diurna=valor_hora*hora_diurna;
    {
    total_nocturnas=valor_hora*hora_nocturna;
    porciento_nocturna=((total_nocturnas/100)*35);
    valor_nocturna=total_nocturnas+porciento_nocturna;
    }

    {
      total_domi=valor_hora*hora_domi;
      porciento_domi=((total_domi/100)*50);
      valor_domi=total_domi+porciento_domi;
    }

    {
     total_festivo=valor_hora*hora_festivo;
     porciento_festivo=((total_festivo/100)*75);
     valor_festivo=total_festivo+porciento_festivo;
    }
    total_salario=total_diurna+valor_nocturna+valor_domi+valor_festivo;
    cout<<"-------------------------------"<<endl;
    cout<<"valor horas diurnas = "<<total_diurna<<endl;
    cout<<"valor hora nocturna = "<<valor_nocturna<<endl;
    cout<<"valor horas dominicales = "<<valor_domi<<endl;
    cout<<"valor horas festivos = "<<valor_festivo<<endl;
    cout<<"total salario = "<<total_salario<<endl;

return 0;
}
