//13) A prefeitura de Cafundodojudas abriu uma linha de credito para os funcion�rios estatut�rios.
//O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto.
//Fazer um algoritmo onde o usu�rio informa seu sal�rio bruto e o valor da presta��o e o programa exibe na tela
//se o empr�stimo pode ou n�o ser concedido.

#include <iostream>
using namespace std;
int main(){
   float s,p,j;
    cout << "LINHA DE CREDITO CAFUNDODOJUDAS\n";
    cout << "\nInforme seu salario: ";
    cin >> s;
    cout << "Valor da prestacao: ";
    cin >> p;
    j=0.3*s;
    if (p<=j){
        cout << "O EMPRESTIMO FOI EFETIVADO. ";
    }
    else if (p>j){
        cout << "O EMPRESTIMO NAO FOI EFETIVADO";
    }
}

