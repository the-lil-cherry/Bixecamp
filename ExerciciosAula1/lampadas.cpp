#include <iostream>
using namespace std;

int main(){
    int N, i, inte;
    bool L1, L2;

    L1 = 0;
    L2 = 0;
    cin >> N;
    for (i = 1; i <= N; i++){
        cin >> inte;
        if (inte == 1){
            L1 = !L1;
        }
        if (inte == 2){
            L1 = !L1;
            L2 = !L2;
        }
    }
    cout << L1 << endl << L2 << endl;

}