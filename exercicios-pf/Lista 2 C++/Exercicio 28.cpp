/*29) Entrar com n�meros enquanto forem positivos e imprimir quantos n�meros foram digitados.*/


#include <iostream>
using namespace std;
int main(){
    int n,c=0;
   while(1){
    cout <<"\nDigite um numero: ";
    cin >> n;
    if(n>=0){
        c++;
    }
       if (n<=0){
            --c;
            break;
       }
   }
   cout << "Foram digitados : "<< c << " numeros.";
}






