/*17) Uma firma contrata encanadores e paga por dia. Crie um programa que solicite o n�mero de dias trabalhados pelo encanador,
 solicite o valor a ser pago em cada dia e imprima a quantia
l�quida que dever� ser paga a ele, sabendo-se que s�o descontados 8% de impostos.*/



#include <iostream>
using namespace std;
int main(){
    int d,v,s,t;
    cout << "\nDias trabalhados: ";
    cin >> d;
    cout << " Valor da diaria: ";
    cin >> v;
    s=d*v;
    t=s*0.08;
    cout << "Valor total de dias trabalhados com desconto de 8% --> " << s-t;
}


