/*25) Fa�a um algoritmo que imprima os n�meros pares no intervalo de 1 a 600.
A verifica��o se o numero � par ou n�o dever� ser feita atrav�s de uma fun��o.
A impress�o do numero dever� ser feita pelo programa principal.*/





#include <iostream>
using namespace std;
int pares(int i){
    int num;
    if (i%2==0){
        num=i;
        return num;
    }
}
int main(){
    int i,op;
    for (i=1 ; i<=600 ; i++){
        op=pares(i);
        cout << op << "\n";
    }
}





