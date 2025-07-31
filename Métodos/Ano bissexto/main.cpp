/******************************************************************************


*******************************************************************************/
#include <iostream>
using namespace std;

bool anoBissexto (int ano){
    if(ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0){
        return true;
    }
    
    return false;
}

int main()
{
    int verificarAno;
    
    cout<<"Digite um ano para verificar se é bissexto: " << "\n";
    cin>> verificarAno;
    
    cout<<anoBissexto(verificarAno);
    return 0;
}