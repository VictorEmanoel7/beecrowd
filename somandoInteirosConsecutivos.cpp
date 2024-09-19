#include <iostream>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    while (n <= 0) {
        cin >> n;
    }
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += a + i;
    }
    cout << soma << endl;
    return 0;
}
