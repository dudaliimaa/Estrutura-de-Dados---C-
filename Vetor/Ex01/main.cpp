/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    
    int vetor[10], inverso[10];
    int i = 0, num;

    // Lê números até o vetor ter 10 elementos ou até um número negativo ser inserido
    while (i < 10) {
       cout << "Digite um número: ";
       cin >> num;

        if (num < 0) {
            break;
        }

        vetor[i] = num;
        i++;
    }

    // Cria o vetor inverso
    for (int j = 0; j < i; j++) {
        
        inverso[j] = vetor[i - j - 1];
    }

    // Exibe o vetor inverso
    cout << "Vetor inverso: ";
    for (int j = 0; j < i; j++) {
        cout << inverso[j] << " ";
    }

    cout << endl;

    return 0;
}