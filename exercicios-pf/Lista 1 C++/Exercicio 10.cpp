//10) Modifique o programa anterior de forma que o usu�rio insira 5 n�meros e para
//cada um o programa imprima na tela se ele � par ou se � impar. Use o comando for.


#include <iostream>
using namespace std;
int main(){
    int n;
    for (int i=1 ; i<=5 ; i++){
    cout << "\nDigite um numero: ";
    cin >> n;
    if (n%2==0){
        cout << "O numero e par.";
    }
    else{
        cout << "O numero e impar.";
    }
    }
}
