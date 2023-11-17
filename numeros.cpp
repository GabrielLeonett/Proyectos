#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

string fibonacci(int );
string primo(int );
string par(int );
bool saber(int );
int main(){
    int numero;
    string fibonacci_n;
    string primo_n;
    string par_n;
    
    cout<<"\tPrograma para saber si un número es fibonacci, par y primo."<<endl;
    cin>>numero,
    cout <<"\nEl numero "<<numero<<" es: "<<fibonacci(numero)<<", "<<primo(numero)<<", "<<par(numero)<<".";

}
string fibonacci(int n){
    string palabra;
    int aux;
    int numero_actual = 1;
    int numero_anterior = 0;
    
    while(numero_actual < n){
    aux = numero_actual;
    numero_actual += numero_anterior;
    numero_anterior = aux;
    }
    if(numero_actual == n){
    palabra = "Es Fibonacci";
    return palabra;
    }
    else{
    palabra = "No es Fibonacci";
    return palabra;
    }
}
string primo(int n){
    string palabra;

        if(saber(n)){
            palabra = "Es primo";
            return palabra;
        }
        else{
        palabra = " No es primo";
        return palabra;
        }
    }
string par(int n){
    string palabra;
    if(n % 2 == 0){
    palabra = "Es par";
    return palabra;
    }
    else{
    palabra = "Es impar";
    return palabra;
    }
}
bool saber(int n){
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
    {
        return false;
    }
    }
    
    return true;
    
}