#include <iostream>
using namespace std;

int main () {
    int hrInicial,hrFinal,contHora;
    cin >> hrInicial >> hrFinal;
    if (hrInicial < 0 || hrFinal < 0 || hrInicial > 24 || hrFinal > 24) {
        cout << "erro!";
        return 1;
    }
    if(hrInicial == hrFinal) 
        contHora = 24;
    else {
        if(hrInicial > hrFinal)
            hrFinal += 24;

        contHora = hrFinal - hrInicial;
    }
    cout <<"O JOGO DUROU "<<contHora <<" HORA(S)\n";
    return 0;
}