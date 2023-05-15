#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas dos
alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). Calcule a média de
todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que a média calculada. Em
seguida, escreva as matrículas dos alunos cujas notas foram menores do que a média.
*/
int main(){
    int t;
    float media =0.0;
    cin >> t;
    int M[t];
    float N[t];

    for(int i=0; i<t; i++){
        cin >> M[i] >> N[i];
    }

    for(int i=0; i<t; i++){
        media += N[i];
    }
    media /= t;

    cout << "Nota maior: " << endl;
    for(int i = 0; i < t; i++){
        if(N[i] > media){
            cout << " " << N[i];
        }   
    }


    cout << endl << "Matricula nota menor: " << endl;
    for(int i = 0; i < t; i++){
        if(N[i] < media){
            cout << " " << M[i];
        }
    }

}