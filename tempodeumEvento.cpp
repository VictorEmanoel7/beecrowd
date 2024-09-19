#include <iostream>
using namespace std;

int main() {
    string dia;
    int diaIni, diaFim, hI, mI, sI, hF, mF, sF;
    int diaT, hT, mT, sT;

    cin >> dia >> diaIni;
    cin >> hI; cin.ignore(); cin >> mI; cin.ignore(); cin >> sI;
    cin >> dia >> diaFim;
    cin >> hF; cin.ignore(); cin >> mF; cin.ignore(); cin >> sF;

    diaT = diaFim - diaIni;
    hT = hF - hI;
    mT = mF - mI;
    sT = sF - sI;

    if (sT < 0) {
        sT += 60;
        mT--;
    }
    if (mT < 0) {
        mT += 60;
        hT--;
    }
    if (hT < 0) {
        hT += 24;
        diaT--;
    }

    if(diaT < 0)
        diaT = 0;
    
    cout << diaT << " dia(s)\n";
    cout << hT << " hora(s)\n";
    cout << mT << " minuto(s)\n";
    cout << sT << " segundo(s)\n";

    return 0;
}
