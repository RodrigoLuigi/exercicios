/*6) Fa�a um programa onde o usu�rio forne�a os valores (float) de dois vetores de
 5 posi��es e imprima na tela se esses vetores s�o iguais ou n�o.*/



 #include <iostream>
 using namespace std;
 int main(){
     int c=0;
     float v[5],u[5];
            cout << "      Vetor 1\n";
                for(int i=0 ; i<5 ; i++){
                    cout << "\nDigite um valor: ";
                    cin >> v[i];
                }
                cout << "       Vetor 2 \n";
                    for(int i=0 ; i<5 ; i++){
                        cout << "\nDigite um valor: ";
                        cin >> u[i];
                    }
                        for(int i=0 ; i<5 ; i++){
                            if(v[i]!=u[i]){
                                break;
                            }
                        }
                        cout << "vetores diferentes";
                        else if (v[i]== u[i]){
                            cout << "vetores iguais.";
                        }
 }






