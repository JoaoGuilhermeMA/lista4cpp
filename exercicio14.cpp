#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor de 20 posições de inteiros e verifique se ele é um palíndromo, ou
seja, se a sua leitura em qualquer direção é a mesma. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 é um palíndromo,
pois se for lido de frente para trás ou de trás para frente terá exatamente os mesmos elementos.
*/
int main(){
    int vetor[20];
    bool ehPalindromo = true;

    for(int i=0; i<20; i++){
        cin >> vetor[i];
    }

    for(int i=0; i<20; i++){
        if(vetor[i] != vetor[19-i]){
            ehPalindromo = false;
            break;
        }
    }

    if(ehPalindromo) cout << "E um Palindromo" << endl;
    else cout << "Nao eh um Palindromo" << endl;


}