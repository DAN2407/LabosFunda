#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main(){
    char frase[50];
    int i=0;
    

    cout<<"introduce la frase a encriptar: "; cin>>frase;
    while (frase[i]!='\0'){
        if (frase[i]=='M'||frase[i]=='m')
            frase[i]='0';
        if (frase[i]=='U'||frase[i]=='u')
            frase[i]='1';
        if (frase[i]=='R'||frase[i]=='r')
            frase[i]='2';
        if (frase[i]=='C'||frase[i]=='c')
            frase[i]='3';
        if (frase[i]=='I'||frase[i]=='i')
            frase[i]='4';
        if (frase[i]=='E'||frase[i]=='e')
            frase[i]='5';
        if (frase[i]=='L'||frase[i]=='l')
            frase[i]='6';
        if (frase[i]=='A'||frase[i]=='a')
            frase[i]='7';
        if (frase[i]=='G'||frase[i]=='g')
            frase[i]='8';
        if (frase[i]=='O'||frase[i]=='o')
            frase[i]='9';

        i++;
        {
            cout<<("%s", frase);
            getche();
        }
    }
    system("PAUSE");
}
    
 //murcielago, pero tiene que presionar Enter para que salga el mensaje, de a poco.   
 //tiene que poner _ para que funcione las oraciones con espacios.