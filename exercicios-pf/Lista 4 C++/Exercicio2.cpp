/*2) Crie um programa com um vetor de inteiros com 15 posi��es.
Tal vetor deve ser preenchido por n�meros fornecidos pelo usu�rio.
Ao final, imprima todos os n�meros que s�o divis�veis por 3 e est�o dentro do vetor.*/




#include <iostream>
using namespace std;
int main(){
int t[15];
    for(int i=0 ; i<15 ; i++){
        cout << "Digite um numero inteiro: ";
        cin >> t[i];
    }
    cout << "\n";
        for (int i=0 ; i<15 ; i++){
            if (t[i]%3==0){
                cout << " |" <<t[i] << " ";
            }
        }
}

