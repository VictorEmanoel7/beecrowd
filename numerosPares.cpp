#include <iostream>
using namespace std;

int main() {
    int par;
    for(int i = 1 ; i <= 100 ; i++) {
        par = i%2;
        if(par == 0)
            cout<<i<<endl;
    }
    return 0;
}