#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main (){
    int dividiendo;
    int divisor;
    printf ("\n **Programa del teorema de Euclides**\n\n");
    printf(" Buenas, aqui calcularas el MCD de dos numeros.\n\n Porfa, introduzca su dividendo:   ");
    scanf ("%d", &dividiendo );
    printf("\n Ahora ingrese su divisor:  ");
    scanf ("%d", &divisor );

    int resto = dividiendo%divisor;
    if (resto == 0){
        printf ("\n\n El MCD de %d \n\n", divisor);
    }
    while(!resto==0){
        dividiendo = divisor;
        divisor = resto;
        resto = dividiendo%divisor;
        if(dividiendo%divisor == 0){
            printf("\n\n El MCD es %d \n\n", divisor);
            break;
        }
    }

    system("PAUSE");
}


