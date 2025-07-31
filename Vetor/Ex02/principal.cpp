#include <iostream>
using namespace std;

int main() {
    int vetor[100];  // Vetor para armazenar até 100 números
    int n, count = 0, last_number;

    cout << "Digite números (digite 0 para parar):" << endl;

    // Leitura dos números
    for (int i = 0; i < 100; ++i) {
        cin >> n;
        
        // Se o número digitado for 0, interrompe o loop
        if (n == 0) {
            break;
        }

        vetor[i] = n;  // Armazena o número no vetor
        last_number = n;  // Guarda o último número digitado
    }

    // Contando quantos números iguais ao último foram digitados
    for (int i = 0; i < 100 && vetor[i] != 0; ++i) {
        if (vetor[i] == last_number) {
            count++;
        }
    }

    cout << "Quantidade de números iguais ao último número digitado: " << count << endl;

    return 0;
}
