/*30) Entrar com n�meros positivos e imprimir a m�dia dos n�meros digitados.
O usu�rio deve informar um n�mero negativo para informar o final da sequ�ncia dos n�meros.*/





#include <iostream>
using namespace std;
int main(){
    float media;
    int n,s=0,c=0;
   while (1){
        cout << "Digite um numero: ";
        cin >> n;
        s=s+n;
        c=c+1;
    if (n<=0){
        c--;
        media=s/c;
        break;
    }
    }
    cout <<"A media dos numeros digitado e: " << media ;
}
