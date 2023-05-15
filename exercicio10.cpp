#include <iostream>

using namespace std;
/*
Sejam A e B dois vetores contendo 10 elementos inteiros. Elabore um algoritmo que:
a. Leia A e B.
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.
*/
int main(){
    int A[5], B[5], C[5], somaA=0, somaB=0, qntdM=0;

    for(int i = 0; i < 5; i++){
        cin >> A[i] >> B[i];
        somaA += A[i];
        somaB += B[i];
        C[i] = A[i] + B[i];
    }

    for(int i = 0; i <5; i++){
            if(A[i] > somaB){
                qntdM++;
            }
    }

    cout << "Soma A: " << somaA << endl;
    cout << qntdM << " elementos de A sao maiores que a soma de B"<< endl;
    for(int i = 0; i <5;i++){
        cout << C[i] << " ";
    }

}