/*13) Crie um programa que receba do usu�rio um endere�o de e-mail e verifique ser ele � v�lido ou n�o.
Para ser v�lido ele deve ter pelo menos um caractere @ e um ponto (.).*/



#include <iostream>
using namespace std;
int main(){
   char c=@
    string mail;
    cout << "Digite seu e-mail: ";
    cin >> mail;
    for(int i=0 ; i<mail.size() ; i++){
        if(mail[i]== @ ){
                break;
        }
    }
        cout << "Email valido";
    else{
        cout << "Email invalido";
    }
}
