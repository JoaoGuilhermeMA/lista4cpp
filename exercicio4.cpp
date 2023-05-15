#include <iostream>

using namespace std;
/*
Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois elementos consecutivos desse vetor. 
Ao final, escreva a maior diferença e os índices dos respectivos elementos.
*/
int main(){
    int vetor[10], n1=0,n2=0,diferença1=0, indice1=0, indice2=0;

    for(int i=0; i<10;i++){
        cin >> vetor[i];
    }

    for(int i=0; i<9; i++){
        if((vetor[i] - vetor[i+1] < 0) || (vetor[i+1] - vetor[i] < 0)){
            diferença1 = (vetor[i] - vetor[i+1])*-1;
        }
        if(diferença1 > n1 - n2){
            n1 = vetor[i];
            n2 = vetor[i+1];
            indice1 = i;
            indice2 = i+1;
        }
    }
    cout << endl;
    cout << diferença1 << endl;
    cout << indice1 << " " << indice2 << endl;
}