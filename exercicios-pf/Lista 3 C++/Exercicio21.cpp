
/*21) Fa�a um algoritmo que leia uma temperatura em graus cent�grados e apresente-a convertida em graus Fahrenheit.
 A convers�o dever� ser feita atrav�s de uma fun��o. A impress�o dos resultados dever� ser feita pelo programa principal. */



 #include <iostream>
 using namespace std;
 float fahr(float c){
    float fahr;
    fahr=(c*1.8)+32;
    return fahr;
}
 int main(){
     float c,f;
     cout << "Informe a temperatura em graus celsius: ";
     cin >> c;
     f=fahr(c);
     cout << "O valor convertido de graus celsius para fahrenheit e de : "<< f;
 }
