#include <iostream>

using namespace std;
/*
Elabore um algoritmo que declare dois vetores A e B de 10 elementos de inteiros, leia os seus elementos e
intercale os dois vetores A e B formando o vetor C (de 20 elementos).
*/
int main(){
    int a[5], b[5], c[10], j=0;
    for(int i=0; i<5; i++){
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < 10; i+= 2)
    {
        c[i] = a[j];
        c[i+1] = b[j];
        j++;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}