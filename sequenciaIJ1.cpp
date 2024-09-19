#include <iostream>
using namespace std;

int main() {
    int i = 1, j = 60;
    while(j != -5) {
        cout << "I=" << i << " J=" << j << endl;
        j -= 5;
        i += 3;
    }
    return 0;
}