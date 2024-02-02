#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena = "hola, hola, hola, adiós";
    std::string palabra = "hola";
    size_t contador = 0;
    size_t pos = cadena.find(palabra);
    while (pos != string::npos) {
        contador++;
        pos = cadena.find(palabra, pos + palabra.size());
    }
    std::cout << contador << std::endl;
}
