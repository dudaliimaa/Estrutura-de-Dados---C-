/******************************************************************************

Best-Fit, Worst-Fit e First-Fit.

*******************************************************************************/
#include <iostream>  
using namespace std; 

// Função para executar o algoritmo First-Fit
void firstFit(int particoes[], int nPart, int processos[], int nProc) {
    
    cout << "\n--------------- First-Fit ---------------\n";

    // Copia das partições para não modificar as originais
    int memoria[100];
    for (int i = 0; i < nPart; i++) {
        memoria[i] = particoes[i];
    }

    // Percorre cada processo
    for (int i = 0; i < nProc; i++) {
        
        bool alocado = false;

        // Tenta encontrar a primeira partição onde caiba o processo
        for (int j = 0; j < nPart; j++) {
            
            if (memoria[j] >= processos[i]) {
                cout << "Processo " << processos[i] << "KB alocado na partição de " << memoria[j] << "KB\n";
                memoria[j] -= processos[i]; // Reduz espaço da partição
                alocado = true;
                break;
            }
        }

        if (!alocado) {
            cout << "Processo " << processos[i] << "KB não foi alocado\n";
        }
    }
}

// Função para Best-Fit
void bestFit(int particoes[], int nPart, int processos[], int nProc) {
    
    cout << "\n--------------- Best-Fit ---------------\n";
    int memoria[100];
    for (int i = 0; i < nPart; i++) memoria[i] = particoes[i];

    for (int i = 0; i < nProc; i++) {
        int melhor = -1;

        for (int j = 0; j < nPart; j++) {
            if (memoria[j] >= processos[i]) {
                if (melhor == -1 || memoria[j] < memoria[melhor])
                    melhor = j;
            }
        }

        if (melhor != -1) {
            cout << "Processo " << processos[i] << "KB alocado na partição de " << memoria[melhor] << "KB\n";
            memoria[melhor] -= processos[i];
        } else {
            cout << "Processo " << processos[i] << "KB não foi alocado\n";
        }
    }
}

// Função para Worst-Fit
void worstFit(int particoes[], int nPart, int processos[], int nProc) {
    
    cout << "\n--------------- Worst-Fit ---------------\n";
    int memoria[100];
    for (int i = 0; i < nPart; i++) memoria[i] = particoes[i];

    for (int i = 0; i < nProc; i++) {
        int pior = -1;

        for (int j = 0; j < nPart; j++) {
            if (memoria[j] >= processos[i]) {
                if (pior == -1 || memoria[j] > memoria[pior])
                    pior = j;
            }
        }

        if (pior != -1) {
            cout << "Processo " << processos[i] << "KB alocado na partição de " << memoria[pior] << "KB\n";
            memoria[pior] -= processos[i];
        } else {
            cout << "Processo " << processos[i] << "KB não foi alocado\n";
        }
    }
}

// Função principal
int main() {
    
    int nPart; // Número de partições
    int particoes[100]; // Tamanhos das partições

    // Entrada do número de partições
    cout << "Digite o número de partições: ";
    cin >> nPart;

    // Entrada dos tamanhos das partições
    for (int i = 0; i < nPart; i++) {
        cout << "Digite o tamanho da partição " << i + 1 << " (em KB): ";
        cin >> particoes[i];
    }

    int nProc; // Número de processos
    int processos[100]; // Tamanhos dos processos

    // Entrada do número de processos
    cout << "\nDigite o número de processos: ";
    cin >> nProc;

    // Entrada dos tamanhos dos processos
    for (int i = 0; i < nProc; i++) {
        cout << "Digite o tamanho do processo " << i + 1 << " (em KB): ";
        cin >> processos[i];
    }

    // Chamada das simulações
    firstFit(particoes, nPart, processos, nProc);
    bestFit(particoes, nPart, processos, nProc);
    worstFit(particoes, nPart, processos, nProc);

    return 0;
}

