#include <iostream>
#include <stdlib.h>
#include <time.h>

int verificacion(int, int, int);
using namespace std;

int main(){
    int e, numero, oportunidad = 1;

    srand(time(NULL));//numeros aleatorios
    numero = 1 + rand()%(101-1);

    cout<<"***El Numero Magico***"<<endl<<endl;
    cout<<"Digite un numero: "<<endl;
    
    while(cin >> e){
        verificacion(e, numero, oportunidad);
    }

}
int verificacion(int e, int numero, int oportunidad){  
    oportunidad = 0;
        while (oportunidad <=5)   
    {   oportunidad++;
        switch (oportunidad)  //switch para evaluar los cinco casos 
        {
        case 1:
            if(e > numero){
                cout << "Intente con un valor menor (Le quedan 4 intentos) o Crtl-Q para parar el programa: ";
                cin >> e;
                cout  << endl;  // se ralizan if para saber si el numero es correcto, mayor o menor al que se intenta adivinar
                
            }else if(e < numero){
                cout << "Intente con un valor mayor (Le quedan 4 intentos) o Crtl-Q para parar el programa: ";
                cin >> e;
                cout  << endl;
               
            }else if(e == numero && oportunidad == 1){
                cout << "Felicidades ha ganado el juego en el primer intento! :) ";
                oportunidad = 6; 
                            
            }
            break;
        
        case 2:
            if(e > numero){
                cout << "Intente con un valor menor (Le quedan 3 intentos) ";
                cin >> e;
                cout << endl;
                
            }else if(e < numero){
                cout << "Intente con un valor mayor (Le quedan 3 intentos)  ";
                cin >> e;
                cout << endl;
                
            }else if(e == numero && oportunidad == 2){
                cout << "Felicidades ha ganado el juego en el segundo intento! :) ";
                oportunidad = 6;
                
            }else
            break;

        case 3:
            if(e > numero){
                cout << "Intente con un valor menor (Le quedan 2 intentos)  ";
                cin >> e;
                cout << endl;
                
            }else if(e < numero){
                cout << "Intente con un valor mayor (Le quedan 2 intentos)  ";
                cin >> e;
                cout << endl;
                
            }else if(e == numero && oportunidad == 3){
                cout << "Felicidades ha ganado el juego en el tercer intentro! :) ";
                oportunidad = 6;
                
            }else
            break;
        
        case 4:
            if(e > numero){
                cout << "Intente con un valor menor (Le queda un intento)  ";
                cin >> e;
                cout << endl;
                
            }else if(e < numero){
                cout << "Intente con un valor mayor (Le queda un intento)  ";
                cin >> e;
                cout << endl;
                
            }else if(e == numero && oportunidad == 4){
                cout << "Felicidades ha ganado el juego en el cuarto intentro! :) ";
                oportunidad = 6;
                
            }else
            break;
        
        case 5:
            if(e > numero){
                cout << "Debio intentar con un numero menor, para la otra .";
                
            }else if(e < numero){
                cout << "Debio intentar con un numero mayor, para la otra .";
                
            }else if(e == numero && oportunidad == 5){
                cout << "Felicidades ha ganado el juego en el ultimo intento! :) ";
                
            }else
            break;

        default:
            break;
        }

        system("PAUSE");
    }
}