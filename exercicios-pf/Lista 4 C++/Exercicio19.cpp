/*19) Fa�a um algoritmo que leia dois n�meros inteiros e calcule atrav�s de fun��es distintas:
�	A soma entre eles.
�	A subtra��o entre eles.
�	A multiplica��o entre eles.
�	O modulo entre eles.
A impress�o dos resultados dever� ser feita pelo programa principal, os c�lculos nas fun��es.*/



#include <iostream>
using namespace std;
int calcsoma(int a , int b){
    int calcsoma=a+b;
    return calcsoma;
}
int calcsub(int a , int b){
    int calcsub;
    calcsub=a-b;
    return calcsub;
}
int calcmult(int a , int b){
    int calcmult;
    calcmult=a*b;
    return calcmult;
}
int main(){
    int a,b,soma,subtrai,multiplica;
    cout << "Digite 2 numeros inteiros: ";
    cin >> a >> b ;
    soma=calcsoma(a,b);
    subtrai=calcsub(a,b);
    multiplica=calcmult(a,b);
    cout <<"\nSoma = "<< soma << "\nSubtracao = " << subtrai << "\nMultiplicacao = " << multiplica ;
}



