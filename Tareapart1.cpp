#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int N1, N2, N3, P;
     

    cout<<"ingrese Numero 1";
    cin>>N1;
    
    cout<<"ingrese Numero 2";
    cin>>N2;

    cout<<"ingrese NUmero 3";
    cin>>N3;

    P = (N1 + N2 + N3) / 3;

    cout<<"el resultado es:"; cout<<P;
    

    system("pause"); 

    
    return 0;
}