/*21) Dizemos que um n�mero natural � triangular se ele � produto de tr�s n�meros naturais consecutivos.
Exemplo: 120 � triangular, pois 4.5.6 = 120. Crie um programa para imprimir na tela os n primeiros n�meros triangulares,
de forma que n � informado pelo usu�rio.*/



#include <iostream>
using namespace std;
int main(){
    int n,x,y,z,result;
    x=0;
    y=1;
    z=2;
    cout << "Digite um numero: ";
    cin >> n;
    cout << "\nOs " << n << " primeiros numeros triangulares sao: ";
        for (int i=1 ; i<=n ; i++){
            x=x+1;
            y=y+1;
            z=z+1;
            result=x*y*z;
            cout <<"\n"<< x << " * " << y << " * " << z << " = " << result;
            }
}







