#include <iostream>

using namespace std;

int main(){

    int a;
    cout << "EL PROGRAMA DESEA SABER SI EN UN ANIO BISIESTO O NO?\nINGRESE EL ANiO"<<endl;
    cin>>a;

    if ( (a%4==0) &&(a%100!=0) || (a%400==0)){
        cout<<"el anio ingresado  es bisiesto: "<<endl;
    }else{
         cout<<"el anio ingresado  no es bisiesto"<<endl;
    }

    system("PAUSE");

}