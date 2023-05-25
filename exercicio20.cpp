#include <iostream>

using namespace std;

int main()
{
    int x[5], y[5], soma[5], distancia[5];
        
    for (int i = 0; i < 5; i++) {
        bool dif = true;
        do {
            cout << "Digite o número do vetor x: " << endl;
            cin >> x[i];
            
            for (int j = 0; j < i; j++) {
                if (x[i] == x[j]) {
                    dif = false;
                    break;
                }       
            }
        } while (!dif);
    }
    
    for (int i = 0; i < 5; i++) {
        bool dif = true;
        do {
            cout << "Digite o número do vetor y: " << endl;
            cin >> y[i];
            
            for (int j = 0; j < i; j++) {
                if (y[i] == y[j]) {
                    dif = false;
                    break;
                }       
            }
        } while (!dif);
    }
    
    for (int i = 0; i < 5; i++) {
        soma[i] = x[i] + y[i];
        distancia[i] = (x[i] - y[i]);
    }
    
    cout << "Vetor Soma: ";
    for (int i = 0; i < 5; i++) {
        cout << soma[i] << " ";
    }
    cout << endl;
    
    cout << "Vetor Distância: ";
    for (int i = 0; i < 5; i++) {
        cout << distancia[i] << " ";
    }
    cout << endl;
    
    return 0;
}
