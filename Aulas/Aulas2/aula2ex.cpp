#include <iostream>
using namespace std;

int main (){
    int v[1002];
    int n;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> v[i];
    }

    for (int i = n-1; i>=0; i-=1){
        cout << v[i] << endl;
    }
}
