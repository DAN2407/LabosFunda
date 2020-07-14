const int longCad=20;
struct costoPorArticulo
{
    char nombreArticul[longCad +1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

int calculo(float cantidad, float precio){//funcion costo
    float costoArticulo;
    costoArticulo=(cantidad*precio);
    return (costoArticulo);
}
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
string Articul;
int cantidad;
float precio;
float costoArticulo;
int x;

cout<<"\nBuenos Dias, Tardes o Noches!! Ingrese cuantos productos desea comprar: ";
cin>>x;
cout<<"Por Favor ingrese el nombre del articulo que desea: "<<endl;
for(int i=0; i<x; i++){
    cout<<"\n****** Articulo "<< i+1<<"******\n"<<endl;
    cin>>Articul;
    cout<<"la cantidad que desea es de: ";
    cin>>cantidad; 
    cout<<"Precio: $ ";
    cin>>precio;

    costoArticulo = calculo(cantidad, precio);

    cout<<"el costo del articulo "<<i+1<<" es de : $ "<<costoArticulo<<endl;

    cout<<"Producto:"<<Articul<<endl;
    cout<<"cantidad : "<<cantidad<<endl;
    cout<<" $ "<<precio<<endl;
    cout<<"Total: $ "<<costoArticulo<<endl;
}
system("PAUSE");

}





