/*23) Crie um programa que receba do usu�rio um n�mero X e um n�mero N.
 Este programa deve imprimir quais s�o os n�meros divis�veis por N entre 1 e X, inclusive.*/


 #include <iostream>
using namespace std;
int main(){
    int x,n,c;
    cout << " Digite um intervalo: ";
    cin >> x;
    cout << " Digite um numero: ";
    cin >> n;
    cout << " Os numeros divisiveis por: " << n << " sao: ";
    c=0;
    while( c<=x){
        if(c%n==0){
            cout << "\n"<< c;
            c++;
        }
        if (c%n>0){
            c++;
        }
        if( c==n){
            cout << c;
        }
    }
}

