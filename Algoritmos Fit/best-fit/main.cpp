/******************************************************************************
Best fit
*******************************************************************************/
#include <iostream>
using namespace std;

void melhorAjuste(int blocos[], int numBlocos, int tamanhoProcesso) {
    int melhorIndice = -1;
    int menorDiferenca = 10000;

    for (int i = 0; i < numBlocos; i++) {
        int diferenca = blocos[i] - tamanhoProcesso;
        if (diferenca >= 0 && diferenca < menorDiferenca) {
            menorDiferenca = diferenca;
            melhorIndice = i;
        }
    }

    if (melhorIndice != -1) {
        cout << "Processo alocado no bloco " << melhorIndice << endl;
        blocos[melhorIndice] -= tamanhoProcesso; // Aloca a memória
    } else {
        cout << "Nenhum bloco adequado encontrado para o processo." << endl;
    }
}

int main() {
    int blocosMemoria[] = {100, 500, 200};  // Tamanhos dos blocos de memória
    int tamanhoProcesso = 100;               // Tamanho do processo a ser alocado
    int numBlocos = sizeof(blocosMemoria) / sizeof(blocosMemoria[0]);

    melhorAjuste(blocosMemoria, numBlocos, tamanhoProcesso);

    return 0;
}
