#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor A de 20 posições. 
Em seguida, trocar (armazenando em um novo vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e
assim sucessivamente. 
Ao final, escreva os vetores A e B.
*/
int main(){
    int vetor1[5], vetor2[5], contInverso=4;

    for(int i=0; i<5; i++){
        cin >> vetor1[i];
        vetor2[contInverso] = vetor1[i];
        contInverso--;
    }

    for(int i=0; i<5; i++){
        cout << vetor2[i] << " ";
    }
}