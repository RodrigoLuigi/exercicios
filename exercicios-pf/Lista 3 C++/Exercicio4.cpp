/*4) Em competi��o de gin�stica ol�mpica 5 ju�zes fornecem as notas de um determinado atleta.
A nota final ser� a m�dia das notas informadas por cada juiz.
Fa�a um programa que receba as 5 notas de dois atletas e as coloque em dois vetores diferentes.
Ao final, deve ser exigido se o primeiro ou o segundo atleta teve a maior m�dia e qual � essa m�dia.
Lembre-se, as notas podem ser fracion�rios, exemplo: 8,75.*/





#include <iostream>
using namespace std;
int main(){
float a[5],b[5],c=0,m=0,media1,media2;
     cout << "          Atleta 1   ";
            for(int i=1 ; i<6 ; i++){
                    cout << "\nNota " << i <<" = ";
                    cin >> a[i];
                    c=c+a[i];
            }
            cout << "          Atleta 2   ";
                        for(int i=1 ; i<6 ; i++){
                            cout << "\nNota "<< i <<" = ";
                            cin >> b[i];
                            m=m+b[i];
                        }
                            media1=c/5;
                            media2=m/5;
                        if(media1 > media2){
                            cout << "\nA maior media foi do atleta 1 = " << media1;
                        }
                        else{
                            cout << "\nA maior media foi do atleta 2 =
                             " << media2;
                        }
}








