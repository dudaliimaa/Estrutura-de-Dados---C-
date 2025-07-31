/******************************************************************************

Métodos Ex1

*******************************************************************************/
#include <iostream>
using namespace std;

//Método para converter de fahrenheit para celsius.
double forFahrenheit(double celsius){
    double res = (celsius * 9/5) + 32;
    return res;
}

//Método para converter de celsius para fahrenheit.
double forCelsius(double fahrenheit){
    double res = (fahrenheit - 32) * 5/9;
    return res;
}

int main()
{

    double celsius, fahrenheit;
    
    cout << "Digite a temperatura em Celsius para conversão: " <<"\n";
    cin >> celsius;
    
    //Chama o método.
    cout << "Fahrenheit: " << forFahrenheit(celsius)<<"\n";
    
    cout << "Digite a temperatura em Fahrenheit para conversão: "<<"\n";
    cin >> fahrenheit;
    
    //Chama o método.
    cout << "Fahrenheit: " << forCelsius(fahrenheit)<<"\n";
    
    return 0;
}