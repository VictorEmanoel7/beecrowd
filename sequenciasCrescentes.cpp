#include <iostream>
using namespace std;

int main() {
    int x;
    while(cin >> x && x != 0) {
        if(x < 0)
            break;
        for(int i = 1 ; i <= x; i++) {
            cout << i;
            if(i != x) 
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}