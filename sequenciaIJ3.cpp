#include <iostream>
using namespace std;

int main() {
    int i = 1, t = 7;
    while(i <= 9) {
        for(int j = t ; j >= (t-2) ; j--)
            cout << "I=" << i << " J=" << j << endl;
        t+=2;
        i+=2;
    }
    return 0;
}