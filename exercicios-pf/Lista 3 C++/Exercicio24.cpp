/*24) Fa�a um algoritmo que imprima o quadrado dos n�meros de 1 at� 20.
 O calculo do quadrado de cada numero dever� ser feito atrav�s de uma fun��o e a impress�o do resultado
 dever� ser feita pelo programa principal. Ou seja, a fun��o deve receber um n�mero e retornar o quadrado dele.*/


 #include <iostream>
 using namespace std;
 int quadrado(int i){
    int quad;
    quad=i*i;
    return quad;
}
int main(){
    int i,op;
    for(i=1 ; i<=20 ; i++){
        op=quadrado(i);
        cout << op << " ";
    }
}
