#include <iostream>

using namespace std;
/*
Elabore um algoritmo que leia um vetor V de 10 posições de inteiros, não permitindo que sejam digitados
números negativos. Em seguida, leia um número inteiro qualquer e verifique se o número existe no vetor. Se
existir, informe o seu índice. Se não existir, informe a mensagem “Número não localizado!”.
*/
int main(){
    int vetor[5], n, indice, c=0;
    bool naoExiste =true;

    for(int i=0; i<5; i++){
        do
        {
            cin >> vetor[i];
        } while (vetor[i] < 0);
    }

    cin >> n;
    while(naoExiste == true && c < 5){
        if(n == vetor[c]){
            naoExiste = false;
            indice = c;
        }
        c++;
    }

    if(naoExiste){
        cout << "Numero nao localizado" << endl;
    }else{
        cout << endl << "Seu indice e: " <<  indice << endl;;
    }
}