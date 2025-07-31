/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a = 15, b = 25, c = 35;
    int vet[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int *pt1, *pt2, *pt3, *vaux;
    
    //Pegando o endereço de memória das variáveis
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    
    cout << "----------------------------------------" << "\n";
    cout << "Endereço de A: " << &a << "\n";
    cout << "Endereço do ponteiro 1: " << pt1 << "\n";
    cout << "----------------------------------------" << "\n";
    
    cout << "----------------------------------------" << "\n";
    cout << "Valor de a: " << *pt1 << "\n";
    cout << "----------------------------------------" << "\n";
    
    //Atribuindo o valor da posição 1 do vetor ao ponteiro
    vaux = &vet[1];
    
    cout << "----------------------------------------" << "\n";
    cout << "Valor da posição 1 do vetor: " << *vaux << "\n";
    cout << "----------------------------------------" << "\n";
    
    cout << "Valores modificados: " << endl;
    for (int i = 0; i < 10; i += 2) {
        //Usando o ponteiro para varrer o vetor (*(vaux + i) equivale a vaux[i])
        *(vaux + i) += 10;
        cout << "vetor[" << i << "] = " << *(vaux + i) << endl;
    }
    cout << "----------------------------------------" << "\n";

    return 0;
}