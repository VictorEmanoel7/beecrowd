#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n,numerosCobaias,contC = 0,contR = 0,contS = 0,totalCobaias = 0;
    char tipo;
    float percentualC,percentualR,percentualS;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> numerosCobaias >> tipo;
        if (numerosCobaias < 0 || numerosCobaias > 15) {
            cout << "erro";
        }else {
            if(tipo == 'C')
                contC += numerosCobaias;
            if(tipo == 'R')
                contR += numerosCobaias;
            if(tipo == 'S')
                contS += numerosCobaias;
        }
    }
    totalCobaias = contC + contR + contS;
    cout << "Total: " << totalCobaias << " cobaias\n";
    cout << "Total de coelhos: " << contC << endl;
    cout << "Total de ratos: " << contR << endl;
    cout << "Total de sapos: " << contS << endl;
    cout << fixed << setprecision(2);
    percentualC = (static_cast<float>(contC) / totalCobaias) * 100;
    percentualR = (static_cast<float>(contR) / totalCobaias) * 100;
    percentualS = (static_cast<float>(contS) / totalCobaias) * 100;
    cout << "Percentual de coelhos: " << percentualC << " %" << endl;
    cout << "Percentual de ratos: " << percentualR << " %" << endl;
    cout << "Percentual de sapos: " << percentualS << " %" << endl;
    return 0;
}