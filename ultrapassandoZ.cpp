#include <iostream>
using namespace std;

int main() {
    int x,z,cont = 0,s = 0;
    cin >> x >> z;
    while(z <= x) 
        cin >> z;
    while(s <= z) {
        s += x;
        x++;
        cont++;
    }
    cout << cont << endl;
    return 0;
}