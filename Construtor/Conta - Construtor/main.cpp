/******************************************************************************

Exercício 01 - Construtor
*******************************************************************************/
#include <iostream>
using namespace std;

 
class Conta {
    
    public:
    
    int numero;
    double saldo, limite;
    string nome;
    
    //Construtor
    Conta(int numero, double saldo, double limite, string nome){
        
        this -> numero = numero;
        this -> saldo = saldo;
        this -> limite = limite;
        this -> nome = nome;
    }
    
    bool saca(double valor){
        
        if(valor <= saldo){
            saldo -= valor;
            return true;
        } else {
            return false;
        }
    }
    
    void deposita(double valor){
        saldo += valor;
    }
    
    bool transfere(Conta &destino, double valor){
        
        if(saca(valor)) {
            destino.deposita(valor);
            return true;
        } else {
            return false;
        }
    }
    
    //Método para imprimir tudo
    void imprime(){
        
        cout << "-------------------------------------"<< endl;
        cout << "Número da Conta: " << numero << endl;
        cout << "Titular: " << nome << endl;
        cout << "Saldo:  R$ " << saldo << endl;
        cout << "Limite: R$ " << limite << endl;
    }
    
};

int main()
{
    Conta conta1(163, 3500, 4500, "Eduarda de Lima Sales"); // Objeto 1
    Conta conta2(228, 2736, 3600, "Andréa de Lima Menezes"); // Objeto 2
    
    conta1.saca(100);
    conta1.deposita(200);
    
    cout << "Antes da transferência: \n";
    conta1.imprime();
    conta2.imprime();
    
    //Verifica se pode ou não realizar a transferência
    if(conta1.transfere(conta2, 500)){
        cout << "Tranferência realizada com sucesso. \n";
    } else {
        cout << "Falha na transferência. Saldo insuficiente. \n";
    }
    
    cout << "\n Depois da transferência: \n";
    conta1.imprime();
    conta2.imprime();

    return 0;
}