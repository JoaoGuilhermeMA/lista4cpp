#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor S contendo os salários dos funcionários de uma empresa com, no
máximo, 100 funcionários, sendo que para terminar a entrada será fornecido o valor -1. Após toda a entrada
ter sido realizada, leia o valor de um reajuste. Em seguida, gere e escreva um segundo vetor R contendo todos
os salários de S já reajustados.
*/
int main()
{
    float s[10], R[10], p;
    int i=0;
    bool op;

    do
    {
        cout << "Digite o salario " << i << endl;
        cin >> s[i];
        i++;
    } while (s[i - 1] != -1 && i < 10);

    do
    {
        cout << "Houve um aumente ou corte? (aumento-1, corte-0)" << endl;
        cin >> op;
        cout << "Qual e a percentagem do reajuste? " << endl;
        cin >> p;
    } while (p < 1 || p > 100);
    if(op){
        p = 1+(p/100);        
    }else{
        p = 1-(p/100);
    }

    for(int j = 0; j < 10; j++){
        R[j] = s[j]*p;
    }
    cout << endl;
    for(int j = 0; j < 10; j++){
        cout << R[j] << endl;
    }
    cout << endl;
}