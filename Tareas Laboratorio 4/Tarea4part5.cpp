#include "iostream"
#include "cstring"

using namespace std;

int main()
{
    string palabra;
    char chara;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for(int i = 0; i<palabra.length();++i) 
    {
        chara = palabra.at(i);
    }

    if(palabra.at(0) == chara) 
    {
        cout << "La palabra empieza y termina con la misma letra."<<endl;
    }else 
        cout << "La palabra empieza y termina con diferentes letras."<<endl;

    system("PAUSE");
}