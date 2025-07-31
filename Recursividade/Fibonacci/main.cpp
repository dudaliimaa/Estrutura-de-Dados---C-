/******************************************************************************

Fazer método recursiva de Fibonacci.

*******************************************************************************/
#include <iostream>
using namespace std;

int Fibonacci(int n) {
    
    // Coloca uma condição de parada, pois o Fibonacci de 0 é 0 e, o de 1 é 1.
    if (n == 0 || n == 1) {
        
        return n;
        
    }
    // Faz a recursividade 
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    
    cout<< Fibonacci(100);

    return 0;
}