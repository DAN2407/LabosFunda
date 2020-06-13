#include <iostream>
int Nume_empleado(int, int, int, int, float, float, float, float, float);
int Salario(int, int, int, float, float, float, float, float);
using namespace std;

int main(){
    int nuempl, horas, extra, i;
    float sNeto, sDe, isss, afp, renta;

    cout << "Coloque el numero de empleados, que quiera calcular su salario:"<<endl;
    cin >> nuempl;

    Nume_empleado(nuempl, i, horas, extra, sNeto, sDe, isss, afp, renta);
}

int Nume_empleado(int nuempl, int i, int horas, int extras, float sNeto, float sDe, float isss, float afp, float renta){

    for(i = 1; i <= nuempl; i++){
        cout<<"Ingrese las horas de trabajo del empleado #"<< i << " ";
        cin>>horas;
        cout<<"Ingrese las horas extras"<< i << " ";
        cin >> extras;

        Salario(i,horas,extras,sNeto,sDe,isss,afp,renta);
    }
}

int Salario(int i, int horas, int extra, float sNeto, float sDe, float isss, float afp, float renta){
    horas*=1.75;
    extra*=2.50;

    sNeto = horas + extra;
    cout<<"el Salario neto del trabajador #"<<i<<" es: $"<<sNeto<<endl;

    isss = sNeto * 0.04;
    afp = sNeto * 0.0625;

    if(sNeto > 500.00){
        renta = sNeto * 0.10;
        sDe = sNeto - (isss + afp + renta);

        cout<<"El Salario total del trabajador #"<<i<<" es: $"<<sDe<<endl;
    }else{
        sDe= sNeto - (isss + afp);
        cout<<"El Salario total del trabajador #"<<i<<" es: $"<<sDe<<endl;
    }

    system("PAUSE");
}