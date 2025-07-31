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
    //Criando o ponteiro e a variável já atribuindo valor a ela
    int *p, x=25;
    //Acessando o endereço de x
    p = &x;
    //Mudando o valor
    *p = 300;
    
    cout<< x <<"\n";

    return 0;
}