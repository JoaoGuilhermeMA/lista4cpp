#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor de 6 elementos inteiros representando o conjunto de números
sorteados na mega sena. Leia, a seguir, para cada um dos N apostadores, um vetor contendo os 6 números
da sua aposta. Verifique para cada apostador o seu número total de acertos na mega sena (para cada número
correto, o apostador ganha 1 acerto) e escrever se ele “não ganhou”, “ganhou a quadra”, “ganhou a quina”
ou “ganhou a mega”. O algoritmo deverá finalizar quando o usuário desejar.
*/
int main()
{
    int numerosSorteados[6], palpite[6], acertos = 0, numJog = 1;
    bool continua = false;

    for (int i = 0; i < 6; i++)
    {
        cout << "Digite os numeros sorteados: " << endl;
        cin >> numerosSorteados[i];
    }

    do
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "Digite sua aposta jogador numero " << numJog << endl;
            cin >> palpite[i];

            for (int j = 0; j < 6; j++)
            {
                if (palpite[i] == numerosSorteados[j])
                {
                    acertos++;
                }
            }
        }

        switch (acertos)
        {
        case 6:
            cout << "Ganhou a sena " << endl;
            break;
        case 5:
            cout << "Ganhou a quina " << endl;
            break;
        case 4:
            cout << "Ganhou a quadra " << endl;
            break;
        default:
            cout << "Nao ganhou " << endl;
            break;
        }

        cout << "Desejar ter um novo jogador? (1 - sim, 0 - nao)" << endl;
        cin >> continua;
        numJog++;
        acertos = 0;
    } while (continua == true);
}