/*5) Crie um programa onde o usu�rio forne�a os quinze valores inteiros de um vetor,
logo ap�s tal programa deve pedir um n�mero ao usu�rio e multiplicar todos os valores deste vetor pelo
n�mero fornecido pelo usu�rio.  Ao final, o vetor deve ser exibido na tela.*/



#include <iostream>
using namespace std;
int main(){
    int v[15],x;
        for(int i=0 ; i<15 ; i++){
            cout << "Digite um numero inteiro: ";
            cin >> v[i];
        }
        cout << "Digite um numero para multiplicar.";
        cin >> x;
        for(int i=0 ; i<15 ; i++){
            v[i]=v[i]*x;
            cout << v[i] << " ";
        }
}

