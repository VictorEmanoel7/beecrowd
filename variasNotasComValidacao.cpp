#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1, n2, media = 0;
    int x;

    while (true) {
        do {
            cin >> n1;
            if (n1 < 0 || n1 > 10)
                cout << "nota invalida\n";
        } while (n1 < 0 || n1 > 10);
        do {
            cin >> n2;
            if (n2 < 0 || n2 > 10)
                cout << "nota invalida\n";
        } while (n2 < 0 || n2 > 10);
        media = (n1 + n2) / 2;
        cout << "media = " << fixed << setprecision(2) << media << endl;
        do {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> x;
        } while (x != 1 && x != 2);
        if (x == 2)
            break;
    }

    return 0;
}
