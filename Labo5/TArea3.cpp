#include <iostream>

using namespace std;

int main(){

    int a;
    cout << "Se quiere saber si el anio ingresado es Bisiesto o no \n Ingrese su anio:   "<<endl;
    cin>>a;

    if ( (a%4==0) &&(a%100!=0) || (a%400==0)){
        cout<<"el anio ingresado  es bisiesto: "<<endl;
    }else{
         cout<<"el anio ingresado  no es bisiesto"<<endl;
    }

    system("PAUSE");

}