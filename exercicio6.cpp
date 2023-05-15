#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o
último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final,
escreva o vetor A modificado.
*/
int main(){
    int vetor[20], contContrario=19, aux;

    for(int i=0; i < 20; i++){
        cin >> vetor[i];
    }

    for(int i=0; i < 10; i++){
        aux = vetor[contContrario];
        vetor[contContrario] = vetor[i];
        vetor[i] = aux;
        contContrario--;
    }

    for(int i=0; i < 20; i++){
        cout << vetor[i] << " ";
    }
}