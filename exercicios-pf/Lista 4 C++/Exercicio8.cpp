/*8) Fa�a um programa onde o usu�rio informe um string e, logo ap�s, os caracteres dessas
string devem ser exibidos na tela de forma ordenada.
Ex: se o usu�rio informar a palavra "banana", deve ser exibido na tela "aaabnn".*/



#include <iostream>
using namespace std;
int main(){
    char aux;
    string t;
    cout << "Digite um nome: ";
    cin >> t;
        for(int i=0 ; i < t.size()-1 ; i++){
            for(int u=i+1 ; u<t.size(); u++){
                if ( t[i] > t[u]){
                aux=t[i];
                t[i]=t[u];
                t[u]=aux;
                }
            }
        }
        for(int i=0 ; i<t.size() ; i++){
            cout << t[i];
        }
}

