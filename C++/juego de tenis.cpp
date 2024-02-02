#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

void desarrollo(int, int);
void MostraResultado(int,int);

int main(){
    string cadena;
    cout<<"Colocar como se desarrollo la partida: ";
    getline(cin,cadena);

    string Player1 = "P1";
    string Player2 = "P2";
    int contador = 1;
    int contador2 = 1;
    size_t pos1 = cadena.find(Player1);
    size_t pos2 = cadena.find(Player2);
    
    while (pos1 != string::npos){
        desarrollo(contador,contador2);
        contador++;
        pos1 = cadena.find(Player1, pos1 + Player1.size());
            while (pos2 != string::npos) {
                contador2++;
                pos2 = cadena.find(Player2, pos2 + Player2.size());  
            }
        desarrollo(contador,contador2);   
    }
    MostraResultado(contador,contador2);

    return 0;
}
void desarrollo(int puntos1, int puntos2){
    if(puntos1){
        if(puntos1 == 1){
            cout<<"Love ---";    
        }
        if (puntos1 == 2)
        {
            cout<<"15 ---";
        }
        if(puntos1 == 3){
            cout<<"30 ---";
        }
        if (puntos1 == 4)
        {
            cout<<"40 ---";
        }

        if(puntos2){
            if (puntos2 == 1)
            {
                cout<<" Love"<<endl;  
            }
            if (puntos2 == 2)
            {
                cout<<" 15"<<endl;
            }
            if(puntos2 == 3){
                cout<<" 30" <<endl;
            }
            if (puntos2 == 4)
            {
                cout<<" 40" <<endl;
            }
        }
    }
    
}
void MostraResultado(int puntos1,int puntos2){

    if(puntos1 > puntos2){
        cout<<"El Primer Jugador ha ganado por esta candidad de puntos: "<<puntos1<<" > "<<puntos2<<endl;
    }
    if(puntos1 < puntos2){
        cout<<"El Segundo Jugador ha ganado por esta candidad de puntos: "<<puntos2<<" > "<<puntos1<<endl;
    }
    else{
        cout<<"Ha quedado empatado, por esta candidad de puntos: "<<puntos1<<" = "<<puntos2<<endl;
    }
}