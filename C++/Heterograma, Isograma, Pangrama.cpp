#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

bool Heterograma(string CADENA) // Esta funcion es para saber si la CADENA es heterograma
{
    string Prueba = "";
    int tamaño = CADENA.size();
    for(int i = 0; i< tamaño ; i++ ){
        for(int j = 0; j < tamaño ; j++){
            if (Prueba[j] == CADENA[i]){
                return false;
            }
        }
        Prueba += CADENA[i];
    }
    return true;
}
bool Isograma(string CADENA){
    string Prueba = "";
    const char espacio = " ";
    int tamaño = CADENA.size();
    for(int i = 0; i< tamaño ; i++ ){
        for(int j = 0; j < tamaño ; j++){
            if (Prueba[j] == CADENA[i]){
                return false;
            }
            else if(CADENA[i] == espacio[j]){
                break;
            }
        }
        Prueba += CADENA[i];
    }
    return true;
}
bool Pangrama(string CADENA){

    string Alfabeto = "ABCDEFGHIJKLÑOPQRSTOYWXYZ";  //Letras para la comparacion alfabetica.
    int tamaño = CADENA.size();                     //Inicializacion de la variable tamaño que es igual al tamaño de la cadena.
    int Prueba;

    for(int i = 0; i< tamaño ; i++ ){
        for(int j = 0; j < tamaño ; j++){
            if (Alfabeto[j] == CADENA[i]){
                Prueba += 1;
            }
        }  
    }
    if (Prueba == 27)
    {
        return true;
    }
    else if( Prueba <= 27)
    {
        return false;
    }
};
int main()
{
    string Cadena;
    cout<<"Ingrese su cadena de caracteres: ";
    getline(cin,Cadena);
    cout<<"\n";
    if (Heterograma(Cadena))
    {
        cout<<"Su cadena es Heterograma."<<endl;
    }
    else{
        cout<<"Su cadena no es Heterograma."<<endl;
    }
    if(Pangrama(Cadena))
    {
        cout<<"Su cadena es Pangrama."<<endl;
    }
    else{
        cout<<"Su cadena no es Pangrama"<<endl;
    }
    if(Isograma(Cadena))
    {
        cout<<"Su cadena es Isograma."<<endl;
    }
    else{
        cout<<"Su cadena no es Isograma"<<endl;
    }
    system("pause");
    return 0;
}