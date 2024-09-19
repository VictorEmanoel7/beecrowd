#include <iostream>
using namespace std;

int main() {
    int n[5],contPar = 0,contImpar = 0,contPosi = 0,contNega = 0;
    for(int i = 0 ; i < 5 ; i++)
        cin >> n[i];
    for(int i = 0 ; i < 5 ; i++) {
        if(n[i] % 2 == 0)
            contPar++;
        if(n[i] % 2 != 0)
            contImpar++;
        if(n[i] < 0)
            contNega++;
        if(n[i] > 0)
            contPosi++;
    }
    cout << contPar << " valor(es) par(es)\n";
    cout << contImpar << " valor(es) impar(es)\n";
    cout << contPosi << " valor(es) positivo(s)\n";
    cout << contNega << " valor(es) negativo(s)\n";
    return 0;
}