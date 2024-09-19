#include <iostream>
using namespace std;

int main () {
    int n[5],cont = 0;
    for(int i = 0 ; i < 5 ; i++)
        cin >> n[i];
    for(int i = 0 ; i < 5 ; i++) {
        if(n[i] % 2 == 0)
            cont++;
    }
    cout << cont << " valores pares\n";
    return 0;
}