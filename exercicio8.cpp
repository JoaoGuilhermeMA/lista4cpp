#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros) e B (20 elementos inteiros), e escreva
um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B.
*/
int main()
{
    int v1[5], v2[5], v3[5], cont=0;

    for (int i = 0; i < 5; i++)
    {
        cin >> v1[i] >> v2[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v1[i] == v2[j]){
                v3[i] = v1[i];
            }
        }
        cont++;
    }

    for(int i = 0; i <  cont; i++)
    {cout << v3[i] << " ";}
}