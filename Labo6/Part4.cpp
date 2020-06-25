#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int v1[1], v2[1], v3[1];
    int i;
    cout<<"ingrese el valor del vector 1: "<<endl;
    for(i=0; i<1; i++){
        cin>>v1[i];
    }
    
    cout<<"ingrese el valor del vector 2: "<<endl;
    for(i=0; i<1; i++){
        cin>>v2[i];
    }
    cout<<"el resultado de la suma de los vectores fue: "<<endl;
    for(i=0; i<1; i++){
        v3[i]=v1[i]+v2[i];
        cout<<i<<"="<<v3[i]<<endl;
    }
    system("PAUSE");
}


