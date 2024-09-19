#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    if( 2 < n && n > 1000) {
        cout << "Erro\n";
    }else {
        for(int i = 1 ; i <= 10 ; i++) 
            cout << i << " x " << n << " = " << (i*n) << endl;
        
    }
    return 0;
}