#include <iostream>

using namespace std;
/*
Elabore um algoritmo que:
Solicite um número inteiro N ao usuário.
Declare um vetor V com N elementos inteiros.
Gere os elementos do vetor de tal forma que o primeiro seja N e os próximos sejam sempre iguais ao dobro
do anterior.
Solicite um número inteiro X ao usuário e busque este elemento no vetor. Caso exista, troque X pelo menor
elemento existente no vetor e o menor elemento por X. Caso não exista, informe ao usuário. Mostre o vetor
antes e depois da mudança.
*/
int main()
{
    int n, x, menorElemento, valorAntigo, indice;
    bool existe = false;
    cin >> n;
    int vetor[n];
    vetor[0] = n;
    menorElemento = vetor[0];
    for (int i = 1; i < n; i++)
    {
        vetor[i] = vetor[i-1] * 2;
        if (vetor[i] < menorElemento)
        {
            valorAntigo = vetor[i];
            menorElemento = vetor[i];
            indice = i;
        }
    }
    cout << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (x == vetor[i])
        {
            existe = true;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << vetor[i] << " ";
    }
    if (existe)
    {
        vetor[indice] = x;
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vetor[i] << " ";
        }
    }
    else
    {
        cout << "Nao existe numero igual" << endl;
    }
}