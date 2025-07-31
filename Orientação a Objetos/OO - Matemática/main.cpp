/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class matematica{
    
    public:
    float a, b;
    
    void entrada(){
        
        cout << "Digite dois valores: ";
        cin >> a >> b;
        
    }
    
    float soma(){
        return a + b;
    }
    
    float sub(){
        return a - b;
    }
    
    float mult(){
        return a * b;
    }
    
    float divisao(){
        if(b != 0){
        return a / b;
        } else {
            cout << "ERRO: divisão por zero!" << endl;
            return 0;
        }
    }
};

int main(int argc, char** argv)
{
    matematica obj;
    obj.entrada();
    cout << "Soma: " << obj.soma() << endl;
    cout << "Subtração: " << obj.sub() << endl;
    cout << "Multiplicação: " << obj.mult() << endl;
    cout << "Divisão: " << obj.divisao() << endl;
    
    return 0;
}