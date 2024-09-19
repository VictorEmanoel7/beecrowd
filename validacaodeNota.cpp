#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n1, n2, media = 0;
    cin >> n1 >> n2;
    while(true) {
        if(n1 >= 0 && n1 <= 10) {
            if(n2 >= 0 && n2 <= 10)
                break;
            else {
                cout << "nota invalida\n";
                cin >> n2;
            }
        }else {
            if(n2 >= 0 && n2 <= 10) {
                cout << "nota invalida\n";
                cin >> n1;
            }else {
                cout << "nota invalida\n";
                cin >> n1 >> n2;
            }
        }
    }
        
    media = (n1 + n2) / 2;
    cout << "media = " << fixed << setprecision(2) << media << endl;
    return 0;
}