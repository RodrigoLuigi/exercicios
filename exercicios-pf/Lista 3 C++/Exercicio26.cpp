/*26) Crie um programa onde o usu�rio informa um n�mero e o computador informa o fatorial deste n�mero.
 Essa seq��ncia deve ser repetir at� que o usu�rio informe 0.
O fatorial deve ser calculado dentro de uma fun��o denominada fat.*/



#include <iostream>
using namespace std;
int fat(int num){
   int cont=0 , x=0,fatorando;
    if(num<=0){
        return num;
    }
    else{
            if(cont==0){
                x=num;
            }
            else{
            fatorando=num*(num-1);
            return fatorando;
            }
    }
}

int main(){
   while(1){
    int op,num;
    cout << "Digite um numero inteiro fatorial que deseja calcular: ";
    cin >> num;
   if(num=0){
    break;
   }
    op=fat(num);
    cout << fat << " ";
   }
}
