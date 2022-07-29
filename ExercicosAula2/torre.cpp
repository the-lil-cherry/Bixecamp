#include <iostream>
using namespace std;

int main(){
    int n, soma = 0, soma2 = 0;
    cin >> n;
    int v[n][n];
    int somai[n], somaj[n];
    for(int i = 0; i<n; i++){
        soma = 0;
        for(int j = 0; j<n; j++){
            cin >> v[i][j];
        }
        somai[i] = 0;
        somaj[i] = 0;
    }
    for(int i = 0; i<n; i++){
        for (int j = 0; j < n; j++)
        {
            somai[i] += v[i][j];
            somaj[i] += v[j][i];
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            soma  = std::max(soma,somai[i] + somaj[j] - 2*(v[i][j]) );
        }
    }
    cout << soma<< endl;
}
