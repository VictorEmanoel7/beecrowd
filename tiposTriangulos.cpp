#include <iostream>
#include <algorithm> // Para usar a função sort
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    // Colocando os valores em um array para facilitar a ordenação
    double lados[3] = {A, B, C};

    // Ordena em ordem decrescente
    sort(lados, lados + 3, greater<double>());

    // Após ordenar, A será o maior, B o do meio, e C o menor
    A = lados[0];
    B = lados[1];
    C = lados[2];

    // Verifica se os lados formam um triângulo
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        // Verifica os tipos de triângulos
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}
