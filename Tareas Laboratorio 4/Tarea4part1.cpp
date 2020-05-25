//Realizar un programa en c++ que verifique si un número es divisible entre otro.
#include <iostream>

using namespace std;


int main(){

    int numero1, numero2;
    cout<<"ingrese numeros"<<endl;
    cin>>numero1;
    cin>>numero2;
    if(numero1 % numero2 == 0){
        cout<<"es divisible"<<endl;
    }else{
        cout<<"no es divisible";
    }

    system("PAUSE");
}