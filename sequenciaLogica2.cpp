#include <iostream>
using namespace std;

int main() {
    int x,y,cont = 0;;
    cin >> x >> y;
    while(true) {
        for(int i = 0 ; i < x ; i++) {
            if(cont >= y)
                break;
            cont++;
            cout << cont;
            if(i != x-1)
                cout << " ";
        }
        cout << endl;
        if(cont >= y)
            break;
    }
    return 0;
}