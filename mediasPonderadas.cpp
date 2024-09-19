#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int n,peso = 1;
    cin >> n;
    double mat[n][3],nota[n];
    cout << fixed << setprecision(1);
    for (int i = 0; i < n; i++)
        for(int j = 0 ; j < 3 ; j++)
            cin >> mat[i][j];
    
    for (int i = 0; i < n; i++)
        for(int j = 0 ; j < 3 ; j++) {
            if(j == 0)
                peso = 2;
            if(j == 1)
                peso = 3;
            if(j == 2)
                peso = 5;
            nota[i] += (mat[i][j] * peso) / 10;
        }

    for(int i = 0 ; i < n ; i++) 
        cout << nota[i] <<endl;
    return 0;
}