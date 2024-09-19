#include <iostream>
using namespace std;

int main() {
    int horaIni,horaFim,minIni,minFim,contHora,contMin;
    cin >> horaIni >> minIni >> horaFim >> minFim;
    if(horaFim == horaIni && minFim == minIni){
        contHora = 24;
        contMin = 0;
    }
    else {
        contHora = horaFim - horaIni;
        contMin = minFim - minIni;
        if(contMin < 0){
            contMin += 60;
            contHora--;
        }
        if(contHora < 0)
            contHora += 24;
    }   
    cout <<"O JOGO DUROU "<<contHora<<" HORA(S) E "<<contMin<<" MINUTO(S)\n";
    return 0;
}