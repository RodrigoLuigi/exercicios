/*35) Escreva um programa pe�a para o usu�rio um n�mero e que imprima na tela a seguinte seq��ncia de "*"
utilizando a instru��o for. No exemplo abaixo, o usu�rio informou o n�mero 6, ou seja, a �ltima linha cont�m 6 "*".*/


#include <iostream>
using namespace std;
int main(){
    int n,i,y;
    cout << "Iforme um numero: ";
    cin >> n;
    for (i=1 ; i<=n ; i++){
        for (y=1 ; y<=i ; y++){
            cout << "*";
    }
    cout << "\n";
    }
}
