#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;
class El_sombrero_seleccionador
{
private:
    int personalidad;
    string Nombre;

public:
    El_sombrero_seleccionador();
    int Preguntas(string _Nombre);
    string Verecdito(int puntuacion);
};

El_sombrero_seleccionador::El_sombrero_seleccionador(){};
int El_sombrero_seleccionador::Preguntas(string _Nombre)
{
    Nombre = _Nombre;
    char Quiz;

        system("cls");
        cout << "Pregunta Nro 1: Cual es la emocion que mueve a las personas: " << endl;
        cout << "A. justicia."<< "\tB. Sabiduria."<< "\nC. Pasion."<< "\tD. Bien Propio."<<endl;
        cin >> Quiz;
        switch (Quiz)
        {
        case 'A':
            personalidad += 4;
            break;
        case 'B':
            personalidad += 3;
            break;
        case 'C':
            personalidad += 5;
            break;
        case 'D':
            personalidad += 2;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }
        cout << "JUM que eleccion tan peculiar."<<endl;
 
        system("cls");
        cout << "Pregunta Nro 2: Que es lo mas importante es tu vida: " << endl;
        cout << "A. Las personas que amo."<< "\tB. Los conocimientos."<< "\nC. Ayudar a los demas."<< "\tD. El Exito."<<endl;
        cin >> Quiz;
        
        switch (Quiz)
        {
        case 'A':
            personalidad += 5;
            break;
        case 'B':
            personalidad += 3;
            break;
        case 'C':
            personalidad += 4;
            break;
        case 'D':
            personalidad += 2;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }
        cout << "!Interesante JAJAJA."<<endl;

        system("cls");
        cout << "Pregunta Nro 3: Que es lo primero que haces al despertar: " << endl;
        cout << "A. Pensar el lo que quiero."<< "\tB. Me leo un libro."<< "\nC. Doy gracias."<< "\tD. Saludo a mis familiares."<<endl;
        cin >> Quiz;
        switch (Quiz)
        {
        case 'A':
            personalidad += 2;
            break;
        case 'B':
            personalidad += 3;
            break;
        case 'C':
            personalidad += 4;
            break;
        case 'D':
            personalidad += 5;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }
        cout<<"Eres alguien que me causa intriga."<<endl;
        system("cls");
        cout << "Pregunta Nro 4: Que es lo que mas quieres en el mundo: " << endl;
        cout << "A. Un libro."<< "\tB. Un coche ultimo modelo."<< "\nC. Pasar tiempo de calidad."<< "\tD. Nuevas aventuras."<<endl;
        cin >> Quiz;
        switch (Quiz)
        {
        case 'A':
            personalidad += 3;
            break;
        case 'B':
            personalidad += 2;
            break;
        case 'C':
            personalidad += 4;
            break;
        case 'D':
            personalidad += 5;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }
        cout<<"UMM Ya veo, te esperan cosas grandes joven "<<Nombre<<" JAJAJA."<<endl;
 
        system("cls");
        cout << "Pregunta Nro 5: Que animal es tu preferido: " << endl;
        cout << "A. Felinos."<< "\tB. Voladores."<< "\nC. Reptiles."<< "\tD. Mamiferos."<<endl;
        cin >> Quiz;
        switch (Quiz)
        {
        case 'A':
            personalidad += 5;
            break;
        case 'B':
            personalidad += 3;
            break;
        case 'C':
            personalidad += 2;
            break;
        case 'D':
            personalidad += 4;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }
        cout<<"Ya casi JAJAJA"<<endl;
  
        system("cls");
        cout << "Pregunta Nro 6: Que te gusta hacer cuando estas a solas: " << endl;
        cout << "A. Buscar nuevos conocimientos."<< "\tB. Hacer algo divertido."<< "\nC. Hacer algo que me satisfaga."<< "\tD. No me gusta la soledad."<<endl;
        cin >> Quiz;
        switch (Quiz)
        {
        case 'A':
            personalidad += 3;
            break;
        case 'B':
            personalidad += 4;
            break;
        case 'C':
            personalidad += 2;
            break;
        case 'D':
            personalidad += 5;
            break;
        default:
            cout << "Coloco LA LETRA de forma incorrecta debe de ser en MAYUSCULAS." << endl;
            system("cls");
        }

    system("cls");
    cout << "Lo tengo, JAJAJA, ya se ha que casa perteneces "<<endl;
    system("pause");
    cout << "Denle la Bienvenidad a "<< Nombre << "... "<<endl;
    system("pause");
    cout<<"Casa " <<Verecdito(personalidad)<<endl;
    system("pause");
};
string El_sombrero_seleccionador::Verecdito(int puntuacion){
    if(puntuacion > 10){
        return "Slytherim";
    }
    else if (puntuacion > 10 && puntuacion < 15)
    {
        return "Ravenclaw";
    }
    else if(puntuacion > 15 && puntuacion < 20){
        return "Hufflepuff";
    }
    else if(puntuacion > 20 && puntuacion < 25){
        return "Gryffindor";
    }
};


int main()
{   system("cls");
    string name;
    cout<<"Cual es tu nombre Joven : "; 
    getline(cin,name);
    cout<<"Muy bien "<<name<<" Veamos a que casa perteneces.";
    El_sombrero_seleccionador Nuevo_integrante;
    Nuevo_integrante.Preguntas(name);
    cout<<"¡Bienvenido a Hogwarts! \nEsperamos que disfrutes de tu tiempo aquí y que aprendas mucho sobre la magia y la amistad. \n¡Que tengas un gran día!"<<endl;
    system("pause");
    return 0;
}