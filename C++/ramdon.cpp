#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    std::string palabra;
    srand(time(nullptr));
    for (int i = 0; i < 10; i++) {
        char letra = 'a' + rand() % 26;
        palabra += letra;
    }
    std::cout << "La palabra aleatoria es: " << palabra << std::endl;
    return 0;
}
