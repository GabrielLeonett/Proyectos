#include<conio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

int main(){
    char frases[100];
    cout<<"Colocar su palabra para pasarlo a leet: ";
    cin.getline(frases,100,'\n');

    for (int i = 0; frases[i] != '\0'; i++)
    {
        if((frases[i] == 'A') || (frases[i] == 'a'))
        {
            cout<<4;
        }
        else if((frases[i] == 'b') || (frases[i] == 'B'))
        {
            cout<<"|3";
        }
        else if((frases[i] == 'c') || (frases[i] == 'C'))
        {
            cout<<"[";
        }
        else if((frases[i] == 'd') || (frases[i] == 'D'))
        {
            cout<<")";
        }
        else if((frases[i] == 'e') || (frases[i] == 'E'))
        {
            cout<<"3";
        }
        else if((frases[i] == 'f') || (frases[i] == 'F'))
        {
            cout<<"|=";
        }
        else if((frases[i] == 'g') || (frases[i] == 'G'))
        {
            cout<<"&";
        }
        else if((frases[i] == 'H') || (frases[i] == 'h'))
        {
            cout<<"#";
        }
        else if((frases[i] == 'i') || (frases[i] == 'I'))
        {
            cout<<"1";
        }
        else if((frases[i] == 'j') || (frases[i] == 'J'))
        {
            cout<<"._|";
        }
        else if((frases[i] == 'k') || (frases[i] == 'K'))
        {
            cout<<">|";
        }
        else if((frases[i] == 'l') || (frases[i] == 'L'))
        {
            cout<<"1";
        }
        else if((frases[i] == 'm') || (frases[i] == 'M'))
        {
            cout<<"(V)";
        }
        else if((frases[i] == 'n') || (frases[i] == 'N'))
        {
            cout<<"^/";
        }
        else if((frases[i] == 'o') || (frases[i] == 'O'))
        {
            cout<<"0";
        }
        else if((frases[i] == 'p') || (frases[i] == 'P'))
        {
            cout<<"|*";
        }
        else if((frases[i] == 'q') || (frases[i] == 'Q'))
        {
            cout<<"(_,)";
        }
        else if((frases[i] == 'R') || (frases[i] == 'r'))
        {
            cout<<"12";
        }
        else if((frases[i] == 's') || (frases[i] == 'S'))
        {
            cout<<"5";
        }
        else if((frases[i] == 'T') || (frases[i] == 't'))
        {
            cout<<"7";
        }
        else if((frases[i] == 'u') || (frases[i] == 'U'))
        {
            cout<<"(_)";
        }
        else if((frases[i] == 'v') || (frases[i] == 'V'))
        {
            cout<<"|/";
        }
        else if((frases[i] == 'w') || (frases[i] == 'W'))
        {
            cout<<"W";
        }
        else if((frases[i] == 'x') || (frases[i] == 'X'))
        {
            cout<<"><";
        }
        else if((frases[i] == 'y') || (frases[i] == 'Y'))
        {
            cout<<"j";
        }
        else if((frases[i] == 'z') || (frases[i] == 'Z'))
        {
            cout<<"2";
        }
    }
    exit(1);
    return 0;
    getch();
    system("pause");
}