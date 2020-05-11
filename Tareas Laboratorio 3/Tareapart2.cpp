#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()
{
    double r, a, p;
    cout << "ingrese el radio de la circunferencia:";
    cin >> r;

    a = 3.1416 * r * r;
    p = 2 * 3.1416 * r;

    cout <<"el area de la circunferencia es:"; cout<< a; 

    cout <<"el perimetro de la circunferencia es"; cout<< p;
    

    system("PAUSE");

    return 0;

}