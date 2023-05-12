#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.
*/
int main()
{
    int elementos[20];

    for (int i = 0; i < 20; i++){
        cout << "Digite um numero: " << endl;
        cin >> elementos[i];

        if(elementos[i] % 2 ==0){
            elementos[i] = 0;
        }
    }

    for(int i = 0; i < 20; i++){
        cout << elementos[i] << ", ";
    }
}