// Realizar un programa en c++ que verifique si un número es positivo, negativo o cero.

#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"introduce el Numero:"<<endl;
    cin>>num;

    if (num>0){
        cout<<"El Numero es Positivo"<<endl;
    }else if (num<0){
        cout<<"El Numero es Negativo"<<endl;
    }else{
        cout<<"El Numero es Cero"<<endl;
    }
   
    system("PAUSE");
}