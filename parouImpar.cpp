#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0 ; i < n ; i++) 
        cin >> p[i];
    for(int i = 0 ; i < n ; i++) {
        if(p[i] < 0) {
            if(p[i] % 2 == 0)
                cout << "EVEN NEGATIVE\n";
            else
                cout << "ODD NEGATIVE\n";
        }else {
            if(p[i] > 0 ) {
                if(p[i] % 2 == 0)
                    cout << "EVEN POSITIVE\n";
                else
                    cout << "ODD POSITIVE\n";
            }else 
                cout << "NULL\n";
        }
    }
    return 0;
}