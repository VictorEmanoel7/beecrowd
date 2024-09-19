#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,soma,t;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(2));
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < 2 ; j++)
            cin >> mat[i][j];
    for(int i = 0 ; i < n ; i++) {
        soma = 0;
        if(mat[i][0] > mat[i][1]) {
            t = mat[i][0];
            mat[i][0] = mat[i][1];
            mat[i][1] = t;
        }
        for (int j = (mat[i][0] + 1) ; j < mat[i][1] ; j++) {
            if(j % 2 != 0) {
                soma += j;
            }
        }
        cout << soma << endl;
    }
        
    return 0;
}