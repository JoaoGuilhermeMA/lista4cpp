#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus elementos pares estão nos índices 2 e 4 . Assim, P
= [2 4].
*/
int main()
{
    int A[5], P[5], qntdPar = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> A[i];
        if (A[i] % 2 == 0)
        {
            P[qntdPar] = i;
            qntdPar++;
        }
    }

    for(int i = 0; i < qntdPar; i++){
        cout << P[i] << " ";
    }
}