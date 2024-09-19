#include <iostream>
using namespace std;

int main() {
    int m,n,s = 0;
    cin >> m >> n;
    while (m > 0 && n > 0) {

        if(m > n) {
            int t = m;
            m = n;
            n = t;
        }
        for(int i = m ; i <= n ; i++) {
            cout << i << " ";
            s += i;
        }
        cout << "Sum=" << s << endl;
        s = 0;
        cin >> m >> n;
    }
    return 0;
}