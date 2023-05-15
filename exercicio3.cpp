#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitados.
*/
int main()
{
    int vetor[15];
    bool escolha;

    for(int i=0; i<15; i++){
        cin >> vetor[i];
    }

    cout << "Deseja ver PAR(0), IMPAR(1):" << endl;
    cin >> escolha;
    cout << endl;

    if(escolha){
        for(int i=1; i<15; i += 2){
            cout << vetor[i] << endl;
        }
    }else{
        for(int i=0; i<15; i += 2){
            cout << vetor[i] << endl;
        }
    }
    
}