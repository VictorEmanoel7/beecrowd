#include <iostream>
using namespace std;

int main() {
    int n,d = 0,f = 0;
    cin >> n;
    int x[n];
    for(int i = 0 ;  i < n ; i++)
        cin >> x[i];
    for(int i = 0 ; i < n ; i++) {
        if(x[i] >= 10 && x[i] <= 20)
            d++;
        else
            f++;
    }
    cout << d << " in\n";
    cout << f << " out\n";
    return 0;
}