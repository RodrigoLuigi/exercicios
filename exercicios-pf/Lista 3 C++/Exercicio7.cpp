/*7) Fa�a um programa que possui um vetor (10 posi��es) e que seus valores s�o passados para ele no momento de sua cria��o.
 Tal programa deve pedir para que o usu�rio tente adivinha um dos n�meros que est�o no vetor e
 imprimir uma mensagem de �xito ou fracasso.
O usu�rio deve ter somente 5 chances para acertar.*/




#include <iostream>
using namespace std;
int main(){
    int mat[]={8,6,10,2,5,3,9,7,4,1};
    int num , aux=0;
        cout << "Adivinhe um numero: ";
        cin >> num;
            for (int i=0 ; i<5 ; i++){
                if (mat[i]==num){
                cout << "Acertou !";
                aux = 1;
                break;
                }
            }
            if(aux == 0){
                cout << "Voce errou.!";
            }
}
