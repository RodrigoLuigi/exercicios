/*26) A s�rie de RICCI difere da s�rie de FIBONACCI  porque os dois primeiros termos da s�rie
s�o fornecidos pelo usu�rio. Os demais termos s�o gerados da mesma forma que a s�rie de Fibonacci.
Criar um algoritmo que pede para que o usu�rio digite os dois primeiros termos e
depois a quantidade de termos que ele deseja imprimir da s�rie de RICCI.*/




#include <iostream>
using namespace std;
int main(){
   int x,y,r,n;
    cout << "Digite um numero: ";
    cin >> x;
    cout << "Digite um numero: ";
    cin >> y;
    cout << "Digite a quantidade de termos: ";
    cin >> n;
   cout << "x + y = 5" << "\nx + y = 10";
    cout << "\n" << x << " + " << y << " = " << 15;
    for(int i=2 ; i<=n ; i++){
        r=x+y;
        cout <<"\n"<< y << " + " << r << " = " << r;
        x=y;
        y=r;
    }
}
