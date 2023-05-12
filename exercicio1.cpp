#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia 20 elementos de um vetor de inteiros  e, em seguida, um valor de código.
Se o código for 1, mostrar o vetor na ordem direta (do primeiro até o último), se o código for 2, mostrar o vetor
na ordem inversa (do último até o primeiro).
*/
int main()
{
    int elementos[20], codigo;
    for (int i = 0; i < 20; i++)
    {
        cout << "Digite um numero " << endl;
        cin >> elementos[i];
    }
    cout << "Digite como voce quer que apareca a ordem: 1 - crescente, 2 - decresente" << endl;
    cin >> codigo;

    if (codigo == 1)
    {
        for (int i = 0; i < 20; i++)
        {
            cout << elementos[i] << ", ";
        }
    }
    else if (codigo == 2)
    {
        for (int i = 19; i >= 0; i--)
        {
            cout << elementos[i] << ", ";
        }
    }
}