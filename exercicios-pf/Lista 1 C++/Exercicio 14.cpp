/*14) Fa�a um programa que receba do usu�rio dois n�meros reais (a e b). Ap�s isso, o programa deve exibir na tela o seguinte menu:

	Digite 1 para somar.
	Digite 2 para subtrair.
	Digite 3 para multiplicar.
	Digite 4 para dividir.
	Digite 5 para sair.
De acordo com a op��o do usu�rio, o programa vai imprimir na tela o resultado de a+b, a-b, a*b ou a/b.

Importante: ap�s a exibi��o do resultado, somente o menu dever� aparecer novamente. A entrada de a e b ocorre uma �nica vez, no in�cio do programa.*/


#include <iostream>
using namespace std;
int main(){
    float a,b,op;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite um numero: ";
    cin >> b;
    while(1){
    cout << "\nDigite 1 para subtrair. \nDigite 2 para subtrair. \nDigite 3 para multiplicar. \nDigite 4 para dividir. \nDigite 5 para sair.\n--> ";
    cin >>op;
    if (op==1){
        cout << a+b;
    }
    else if (op==2){
        cout << a-b;
    }
    else if (op==3){
        cout << a*b;
    }
    else if (op==4){
        cout << a/b;
    }
    else if (op==5){
        break;
    }
    else{
        cout <<" Opcao invalida";
    }
}
}
