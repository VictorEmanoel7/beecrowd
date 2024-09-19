#include <iostream>
using namespace std;

int main() {
    int x,g = 0,d = 0,a = 0;
    while(cin >> x && x != 4) {
        if(x == 1) 
            a++;
        if(x == 2)
            g++;
        if(x == 3)
            d++;
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    return 0;
}