#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Numero {
    int x;
    int y;
};

int main() {
    int n;
    float res;
    cin >> n;
    vector<Numero> vet(n);
    for(int i = 0 ; i < n ; i++) {
        cin >> vet[i].x >> vet[i].y;
    }
    for(int i = 0 ; i < n ; i++) {
        if(vet[i].y == 0)
            cout << "divisao impossivel\n";
        else {
            res = static_cast<float>(vet[i].x) /vet[i].y;
            cout << fixed << setprecision(1) << res << endl;
        }
    }
    return 0;
}