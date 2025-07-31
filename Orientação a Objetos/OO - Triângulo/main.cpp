/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Triangulo{
    
    public:
        int a, b, c;
        
        //Construtor padrão
        Triangulo(){
            a=1;
            b=1;
            c=1;
            
        }
        //Construtor
        Triangulo(int a, int b, int c){
            this->a=a;
            this->b=b;
            this->c=c;
            
        }
    
        /*void entrada(){
            
            cout << "Digite os três lados do triângulo: ";
            cin >> a >> b >> c;
            
        }*/
        
        
        bool verificar(){
            return (a + b > c) && (a + c > b) && (b + c > a);
            }
        
        string tipoTriangulo(){
              
            if (a == b && b == c){
                return "Triângulo Equilátero.";
            } else if (a == b || a == c || b == c){
                return "Triângulo Isósceles.";
            } else {
                return "Triângulo Escaleno.";
            }
        }
    };
int main(int argc, char *argv[])
{
    /*Triangulo t;
    t.entrada();
    
    if (t.verificar()){
        cout << "É um triângulo!" << endl;
        cout << t.tipoTriangulo() << endl;
    } else {
        cout << "Não é um triângulo!" << endl;;
    }*/
    
    Triangulo Obj(1,2,2);
    
    cout << Obj.tipoTriangulo() << endl;

    return 0;
}