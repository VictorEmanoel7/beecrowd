#include <iostream>
using namespace std;

int main() {
    int n,res;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        res = i;
        for(int j = 0 ; j < 3 ; j++) {
            cout << res;
            if(j != 2)
                cout << " ";
            res = res*i;
        } 
        cout << endl;
    }
    return 0;
}