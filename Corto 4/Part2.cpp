#include <iostream>

using namespace std;

int main(){
    int N, contadorM=0, contadorF=0;
    char genero;
    double alturaM, alturaF, alturaAcuM=0, alturaAcuf=0, promedioM, promedioF, mediageneralm=170, mediageneralf=154;

    cout<<"Ingrese la cantidad de alumnos: ";
    cin>>N;

    for(int i=1; i<=N; i++){
        cout<<"ingrese el genero del estudiante (M) (F) "<<endl;
        cin>>genero;

        if(genero == 'M' || genero == 'm' ){
            cout<<"Ingrese la altura: "<<endl;
            cin>>alturaM;
            alturaAcuM=alturaAcuM + alturaM;
            contadorM++;
        }
        else if(genero == 'F' || genero == 'f' ){
            cout<<"Ingrese la altura: "<<endl;
            cin>>alturaF;
            alturaAcuf=alturaAcuf+alturaF;
            contadorF++;
        } else{
            cout<<"El genero no esta registrado, ingrese (M) o (F)"<<endl;
        }
    }
        promedioM = alturaAcuM / contadorM;
        promedioF = alturaAcuf / contadorF;

    
    cout<<"El promedio de la altura de los chicos es de "<< promedioM <<" cm"<<endl;
    cout<<"El promedio de la altura de las chicas es de "<< promedioF <<" cm"<<endl;

    


    system("PAUSE");
}