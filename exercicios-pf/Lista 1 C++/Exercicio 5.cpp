//Crie um programa que imprima a m�dia aritm�tica entre 4 n�meros informados pelo usu�rio.

#include <iostream>
using namespace std;
int main (){
    float n,soma=0;
    for (int i=1; i<=4 ;i++){
    cout << "\nInforme um numero: ";
    cin >>n;
    soma=soma+n;
    }
    cout <<"Soma:" << soma ;
    cout <<"\nA media e: " << soma/4;
}
