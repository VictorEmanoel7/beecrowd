#include <iostream>
using namespace std;

int main() {
    int n[100],maior = 0,posi = 0;
    for(int i = 0 ; i < 100 ; i++)
        cin >> n[i];
    for (int i = 0 ; i < 100 ; i++) {
        if(maior < n[i]) {
            maior = n[i];
            posi = i;
        }
    }
    cout << maior << endl;
    cout << (posi + 1) << endl;
    return 0;
}