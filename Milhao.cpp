#include <iostream>
using namespace std;

int main (){
    int n, a, dia, acu;
    cin >> n;
    dia = 0;
    acu = 0;
    a = 0;
    while(n > 0){
        cin >> a;
        acu += a;
        dia ++;
        if(acu >= 1000000){
            n = 1;
        }
        n -=1;
    }
    cout << dia << endl;

}