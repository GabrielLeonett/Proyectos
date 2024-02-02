#include<iostream>
#include<stdlib.h>
#include<string>
#include<ctime>
#include<conio.h>

using namespace std;

int main(){

    srand(time(nullptr));
    int tamaño;
    string contrasena;
    char Mayusculas, S_simbolos, S_numeros;

    do{
    cout<<"Eliga un tamaño entre 8 y 16 digitos: ";
    cin>>tamaño;
    cout<<endl;
    }while((tamaño <= 8 ) || tamaño >= 16);

    cout<<"Quieres utilizar letras Mayusculas(S/N): ";
    cin>>Mayusculas;
    cout<<endl;
    cout<<"Quieres utilizar simbolos(S/N): ";
    cin>>S_simbolos;
    cout<<endl;
    cout<<"Quiere utilizar numero(S/N): ";
    cin>>S_numeros;
    cout<<endl;


    if(((Mayusculas == 'S') && (S_simbolos == 'N')) && (S_numeros == 'N')){ 
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if (i % 2 == 0)
            {
                cadena = 'a' + rand() % 26;
            }
            else if(i % 2 == 1){
                cadena = 'A' + rand() % 26;
            }
            contrasena += cadena;
        } 
    }

    if(((Mayusculas == 'S') && (S_simbolos == 'S')) && (S_numeros == 'N')){
        for (int i = 0; i < tamaño; i++)
        {   
            char cadena;
            if(i % 4 == 0){
                cadena = 'a' + rand() % 26;
            }
            else if(i % 4 == 1){
                cadena = '!' + rand() % 15;
            }
            else if(i % 4 == 2){
                cadena = 0 + rand()  % 10; 
            }
            contrasena += cadena;
        }
    }    
    if(((Mayusculas == 'S') && (S_simbolos == 'S')) && (S_numeros == 'S')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if(i % 5 == 0){
                cadena = 'a' + rand() % 26;
            }
            else if(i % 5 == 1){
                cadena = '!' + rand() % 15;
            }
            else if(i % 5 == 2){
                cadena = 0 + rand() % 10;
            }
            else if(i % 5 == 3){
                cadena = 'A' + rand() % 26;
            }
            contrasena += cadena;
            }
    }
    if(((Mayusculas == 'N') && (S_simbolos == 'S')) && (S_numeros == 'N')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if(i % 2 == 0)
            {
                cadena = 'a' + rand() % 26;
            }
            else if(i % 2 == 1){
                cadena = '!' + rand() % 15;
            }
            contrasena += cadena;
        }
    }
    if(((Mayusculas == 'N') && (S_simbolos == 'S')) && (S_numeros == 'S')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if(i % 4 == 0){
                cadena = 'a' + rand() % 26;
            }
            else if(i % 4 == 1){
                cadena = '!' + rand() % 15;
            }
            else if(i % 4 == 2){
                cadena = 0 + rand() % 10;
            }

            contrasena += cadena;
        }
    }
    if(((Mayusculas == 'S') && (S_simbolos == 'N')) && (S_numeros == 'S')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if(i % 4 == 0){
                cadena = 'a' + rand() % 26;
            }
            else if(i % 4 == 1){
                cadena = 'A' + rand() % 26;
            }
            else if(i % 4 == 2){
                cadena = 0 + rand() % 10;
            }

            contrasena += cadena;
        }
    }
    if(((Mayusculas == 'N') && (S_simbolos == 'N')) && (S_numeros == 'S')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena;
            if (i % 2 == 0)
            {
                cadena = 'a' + rand() % 26;
            }
            
            else if(i % 2 == 1){
                cadena = 0 + rand() % 10;
            }

            contrasena += cadena; 
        }
    }
    if(((Mayusculas == 'N') && (S_simbolos == 'N')) && (S_numeros == 'N')){
        for (int i = 0; i < tamaño; i++)
        {
            char cadena = 'a' + rand() % 26;
            contrasena += cadena;
        }
    }

    cout<<"La contraseña fue creada: "<<contrasena;
    cout<<endl;

    system("pause");
    return 0;
    exit(1);
}