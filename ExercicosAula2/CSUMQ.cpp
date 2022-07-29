#include <iostream>
using namespace std;

int main(){
    int n, q, in, f;
    cin >> n;
    int L[n];
    for(int i = 0; i<n; i++){
        cin >> L[i];
    }
    cin >> q;
    for(int i = 0; i<q; i++){
        cin >> in >> f;
        int soma = 0;
        for(int j = in; j<= f; j++){
            soma += L[j];
        }
        cout << soma << endl;
    }
}