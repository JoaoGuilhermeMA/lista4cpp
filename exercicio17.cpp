#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor ORIGINAL de 20 posições de inteiro, verifique e informe se os seus
elementos estão em ordem crescente, ordem decrescente ou ordem aleatória.
*/
int main()
{
    int vetor[5], crescente = 0, decrescente = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> vetor[i];
        if (i > 0)
        {
            if (vetor[i] >= vetor[i - 1])
            {
                crescente++;
            }else{
                decrescente++;
            }
        }
    }

    if(crescente == 4){
        cout << "ordem crescente" << endl;
    }else if(decrescente == 4){
        cout << "ordem decrescente" << endl;
    }else{
        cout << "ordem aleatoria" << endl;
    }
    
}
