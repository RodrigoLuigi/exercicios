/*2) Crie um programa que l� do usu�rio um n�mero inteiro e imprimir na tela o sucessor e o antecessor des/te n�mero*/



#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Digite um numero: ";
    cin >> n;
    cout <<"O antecessor de "<< n << " e : " << n-1 << " \nO sucessor e: " << n+1;
}
