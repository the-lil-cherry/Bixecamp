#include <iostream>
using namespace std;

int main (){
    int v[1000000];
    int n, qt = 0;
    cin >> n;

    for(int i = 0; i<n; i++){
        int vi;
        cin>> vi;
        bool apareceu = false;
        for (int j = 0; j<qt; j++){
            if (v[j]==vi){
                apareceu = true;
                break;
            }
        }
        if(!apareceu){
            v[i] = vi;
            qt +=1;
        }
    }
    cout << qt << endl;

}