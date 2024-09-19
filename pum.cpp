#include <iostream>
using namespace std;

int main() {
    int n,t = 1;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = t ; j <= t+2 ; j++) {
            cout << j << " ";
        }
        t += 4;
        cout << "PUM" << endl;
    }
    return 0;
}