/*27) Ler 20 n�meros inteiros e imprimir quantos s�o pares e quantos s�o �mpares.*/




#include <iostream>
using namespace std;
int main(){
    int n,p,i;
        p=0;
        i=0;
        for (int l=1 ; l<=20 ; l++){
            cout << "Digite um numero: ";
            cin >> n;
                if(n%2==0){
                    p=p+1;
                }
                if (n%2>0){
                    i=i+1;
                }
        }
        cout << p << " numeros pares.";
        cout <<"\n"<< i << " numeros impares.";
}






