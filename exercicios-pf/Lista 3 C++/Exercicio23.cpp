/*23) Fa�a um algoritmo que entre com dois n�meros e que atrav�s de uma fun��o imprima-os em ordem crescente.*/

#include <iostream>
using namespace std;

void ordena(float a , float b){
    if(a>b){
            cout << b << " " << a;
    }
    else if (b>=a){
        cout << a << " " << b;
    }
}
int main(){
    float a,b,o;
    cout << "Digite 2 numeros: ";
    cin >> a >> b;
    ordena(a , b);

        }

