/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Calendario {
    
    public: 
    int dia, mes, ano;
    
        Calendario (int d, int m, int a){
            
            this -> dia = 1;
            this -> mes = m;
            this -> ano = a;
        }
        
        bool Bissexto(int ano) {
            
            if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) ) {
                return true; 
                
            }else {
            return false;
            }
        }
        int DiaDaSemana(int dia, int mes, int ano){

            int f = ano + dia + 3 * (mes - 1) - 1; 
            if (mes < 3) ano--; 
            else f -= int(0.4 * mes + 2.3); 
            f += int (ano / 4) - int ((ano / 100 + 1) * 0.75); 
            f %= 7; 
            
            return f+1;   
        }
        
        void ImprimeCalendario() {
            
            cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n"; 
            
            short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            
            if (Bissexto(ano) == true){
                
                TamanhoDoMes[1] = 29;
            }  

  			for(int j = 1; j < DiaDaSemana(dia, mes, ano); j++) cout <<'\t'; 
  			
  			for(int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++){ 
  			    
    			if(dia < 10) cout << '0' <<dia <<'\t'; 
    			else cout <<dia <<'\t'; 
    			
    			if(DiaDaSemana(dia, mes, ano) == 7) cout <<'\n'; 
  			    
  			} 
            
        } 
};

int main()
{
    
    Calendario cal(01, 02, 2024);
    cout << cal.Bissexto(cal.ano) << endl;
    cout << cal.DiaDaSemana(cal.dia, cal.mes, cal.ano) << endl;
    cal.ImprimeCalendario();
    
    return 0;
}