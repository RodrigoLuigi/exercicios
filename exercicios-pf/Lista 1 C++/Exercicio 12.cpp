//12) Escreva um programa que receba como entrada um ano (n�mero inteiro) e retorne se ele � bissexto ou n�o.
//Um ano bissexto � aquele que � divis�vel por 4, mas n�o por 100. Um ano tamb�m � bissexto ser for divis�vel por 400. Exemplos: 1000 n�o � bissexto e 800 � bissexto.


#include <iostream>
using namespace std;
int main(){
    while(1){
    int ano;
    cout << "\nDigite o ano: ";
    cin >> ano;
    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
            cout << "Ano bissexto!";
    }
    else{
        cout <<"Ano nao bissexto!";
    }
    }
}
