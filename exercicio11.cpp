#include <iostream>

using namespace std;
/*
Elabore um algoritmo que preencha automaticamente um vetor de 20 posições de inteiros gerando os
elementos a partir da multiplicação do seu índice por 2. Em seguida, calcule e escreva a soma dos elementos
pares e impares.
*/
int main(){
    int vetor[20], somaPar=0, somaImpar=0;

    for(int i= 0; i<20 ; i++){
        vetor[i]= i * 2;
        if(vetor[i] % 2 == 0){
            somaPar += vetor[i];
        }else{
            somaImpar += vetor[i];
        }
    }

    cout << "Soma Par: " << somaPar << endl;
    cout << "Soma Impar: " << somaImpar << endl;
    for(int i=0; i<20;i++){
        cout << vetor[i] << " ";
    }
}