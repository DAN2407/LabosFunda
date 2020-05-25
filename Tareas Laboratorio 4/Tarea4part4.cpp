#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int longitud;
    char frase[200];
    cout<<"Digite una palabra: ";
    cin.getline(frase,200);
    longitud = strlen(frase);

    if (longitud>10){
        cout<<frase<<endl;
    }else{
        cout<<"La longitud no supera los 10 caracteres"<<endl;
    }

     
   system("PAUSE");
}