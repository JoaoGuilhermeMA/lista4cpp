#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante.
*/
int main(){
    int v1[20], v2[20], v3[20];
    for(int i = 0; i < 20; i++){
        cin >> v1[i] >> v2[i];
        v3[i] = v1[i] * v2[i];
    }
    for(int i = 0; i < 20; i++){
        cout << v3[i] << " ";
    }
}