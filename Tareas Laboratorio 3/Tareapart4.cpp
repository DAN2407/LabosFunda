#include <iostream>  
#include <conio.h>

using namespace std;

int main()
{
   int T;
   string producto;

   cout<<"ingrese el nombre del producto:";
   getline(cin,producto);

   float Precio;

   cout<<"ingrese precio unitario del producto:  $";
   cin>>Precio;

    int Cantidad;

   cout<<"ingrese la cantidad que desea: ";
   cin>>Cantidad;

   T=(Precio*Cantidad);

   cout<<"el total es :  $"; cout<<T;


   

   system("PAUSE");

   return 0;

}