/*3) Fa�a um programa que receba do usu�rio 10 valores float.
 Ap�s isso ele deve imprimir qual � o maior valor, o menor valor e a m�dia destes valores.*/



 #include <iostream>
 using namespace std;
 int main(){
 float t[10],maior=0,menor,c=0;
    for(int i=0 ; i<10 ; i++){
    cout << "Digite um valor: ";
    cin >> t[i];
    c=c+t[i];
    }
    for(int i=0 ; i<10 ; i++){
            if(t[i]>maior){
                maior=t[i];
            }
            menor = maior;
    }
    for (int i=0 ; i<10 ; i++){
        if(t[i] < menor){
            menor = t[i];
        }
    }
    cout << "Maior: " << maior << "\nMenor: " << menor << "\nMedia: " << c/10;
 }


