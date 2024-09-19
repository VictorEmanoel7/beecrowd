#include <iostream>
using namespace std;
 int main() {
    int y, x;
    while(cin >> x >> y && x != 0 && y != 0) {
        if(x > 0) {
            if(y > 0) 
                cout << "primeiro\n";
            else
                cout << "quarto\n";
        }else {
            if(y > 0) 
                cout << "segundo\n";
            else
                cout << "terceiro\n";
        }
    }
    return 0;
 }