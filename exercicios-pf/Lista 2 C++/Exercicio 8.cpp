//8) Crie um programa onde o usu�rio entra com a base e a altura de um ret�ngulo e o programa imprime o per�metro e sua �rea.
//Sabe-se que per�metro = 2*(base + altura)  e a area = base *altura.


#include <iostream>
using namespace std;
int main(){
    int b,a;
    float p,r;
    cout << "Digite a base: ";
    cin >> b;
    cout << "Digite a altura: ";
    cin >> a;
    p=2*b+2*a;
    r=b*a;
    cout <<"O perimetro do retangulo e:" << p << "\nE sua area e:" << r;
}
