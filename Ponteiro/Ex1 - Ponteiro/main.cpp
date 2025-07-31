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
    int a, b, soma;
    int *pont1, *pont2;
    
    cout<< "Digite um valor para A: "<<endl;
    cin >> a;
    
    cout<< "Digite um valor para B: "<<endl;
    cin >> b;
    
    pont1 = &a;
    pont2 = &b;
    
    cout << "\n";
    cout << "----------------------------------------" << "\n";
    cout << "Endereço de a: " << &a << "\n";
    cout << "Endereço de b: " << &b << "\n";
    cout << "----------------------------------------" << "\n";
    
    cout << "----------------------------------------" << "\n";
    cout << "Conteúdo do ponteiro 1: " << pont1 << "\n";
    cout << "Conteúdo do ponteiro 2: " << pont2 << "\n";
    cout << "----------------------------------------" << "\n";
    
    soma = a + b;
    pont1 = &soma;
    
    cout << "----------------------------------------" << "\n";
    cout << "Conteúdo do ponteiro 1 após a soma: " << *pont1 << "\n";
    cout << "----------------------------------------" << "\n";

    return 0;
}