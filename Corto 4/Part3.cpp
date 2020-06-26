#include <iostream>
using namespace std;
 
//Función 
float promedio(float nota1,float nota2, float nota3, float nota4, float nota5){
    float Promedio;
	Promedio = (nota1+nota2+nota3+nota4+nota5)/5;
	return (Promedio);
	}
 

int main(){
char opcion;
float nota1, nota2, nota3, nota4, nota5, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos: ";
cin>>n;
//Bucle para ingreso de Notas, en base a 5 Unidades
for (i=1;i<=n;i++)
	{cout<<"\nIngrese nota I: ";
	cin>>nota1;
	cout<<"Ingrese nota II : ";
	cin>>nota2;
	cout<<"Ingrese nota III : ";
	cin>>nota3;
    cout<<"ingrese la nota IV  ";
    cin>>nota4;
    cout<<"ingrese la nota V : ";
    cin>>nota5;
	notafinal = promedio(nota1,nota2,nota3,nota4,nota5);
	//Condicion si el alumno supera el 6 (Nota mínima)
	if (notafinal > 6)
		{cout<<"El alumno ha aprobado la materia.\n";
		}
	else
		cout<<"El alumno ha reprobado la materia.\n";
	}
    system("PAUSE");
}