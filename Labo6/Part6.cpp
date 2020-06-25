//En este programa, se ingresa una x cantidad y se genera x cantidad de numeros al azar, luego se ingresa el numero que usted desea ver cuanto se repite.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));

    int n, numero, c = 0;
    
    cout<<"Favor ingrese el valor de n: ";cin>>n;

    int vec[n];

    for(int x = 0; x < n; x++)
        vec[x] = (int) ((rand() / 32767.1) * 1001);

    for(int x = 0; x < n; x++)
        cout<<vec[x] << "\t";
    bool encontro = false;

    cout<<"\n\nFavor ingresar un numero: ";
    cin>>numero;

    for(int x = 0; x < n; x++){
        if( numero == vec[x])
            c = c + 1;
    }

    if (c > 0){
        cout<<"\nEl dato aparece en total: "<< c <<" veces";
    }else{
        cout<<"\nEl dato no aparece";
    }
    system("PAUSE");
}