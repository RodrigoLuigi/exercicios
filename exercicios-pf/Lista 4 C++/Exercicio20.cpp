/*20) Crie um algoritmo que entre com a base e a altura de um ret�ngulo e calcule, atrav�s de duas fun��es distintas,
seu per�metro e sua �rea. A impress�o dos resultados dever� ser feita pelo programa principal.
Sabe-se que per�metro = 2*(base + altura)  e a area = base *altura*/



#include <iostream>
using namespace std;
float perimetro(float b , float a){
    float perimetro;
    perimetro=2*(a+b);
    return perimetro;
}
float area(float b , float a){
    float area;
    area=b*a;
    return area;
}
int main(){
    float x,y,p,a;
    cout << "Digite a base do retangulo: ";
    cin >> x;
    cout << "\nDigite a altura: ";
    cin >> y;
    p=perimetro(x,y);
    a=area(x,y);
    cout << "\nO Perimetro do retangulo e "<< p << " e a Area e de " << a << endl;
}



