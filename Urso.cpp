#include <iostream>
using namespace std;

int main (){
    int a, b, cont;
    cont = 0;
    cin >> a >> b;
    while (a <= b){
        cont += 1;
        a = a*3;
        b = b*2;
    }

    cout << cont << endl;
}