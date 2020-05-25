//Realizar un programa en c++ que verifique si un número es par o impar
#include <iostream>

using namespace std;

int main(){

    int n;
    cout<<"ingrese un numero"<<endl;
    cin>>n;

    if(n % 2 == 0){
        cout<<"es Par"<<endl;
    }else{
        cout<<"es Impar"<<endl;
    }

    system("PAUSE");
}