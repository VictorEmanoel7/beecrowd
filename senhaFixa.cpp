#include <iostream>
using namespace std;

int main() {
    int senha;
    while(cin >> senha && senha != 2002)
        cout << "Senha Invalida\n";
    cout << "Acesso Permitido\n";
    return 0;
}