/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

bool numPrimo (int num){
    
    int i, cont = 0;
     if (num >= 1){
            
        for (i = num; i > 0; i--){
            if (num % i == 0){
                cont ++;
            }
        }
     }
     
    if(cont == 2){
        return true;
    }  
    
       return false; 
       
}

int main()
{
    int num;
    cout << "Digite um número inteiro e positivo: " <<endl;
    cin >> num;
    
    cout<< numPrimo(num) << "\n";
    return 0;
    
}