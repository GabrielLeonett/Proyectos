#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
class Numero_pseudoaletorio
{
private:
    int numero = time(nullptr);
public:
    Numero_pseudoaletorio();
    int Creacion();
};
Numero_pseudoaletorio::Numero_pseudoaletorio(){};
int Numero_pseudoaletorio::Creacion(){
    do{
        numero /= 2;
    }while (numero > 100 );
    

    return numero;
};

int main()
{
    Numero_pseudoaletorio Num;
    Num.Creacion();
    cout<<"El numero aleatorio es: "<<Num.Creacion()<<endl;
    system("pause");
    return 0;
}
