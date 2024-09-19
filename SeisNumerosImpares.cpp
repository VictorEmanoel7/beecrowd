#include <iostream>
using namespace std;

int main() {
    int n,cont = 0;
    cin >> n;
    while(cont != 6) {
        if(n % 2 != 0) {
            cout << n << endl;
            cont++;
        }
        n++;
    }
    return 0;
}