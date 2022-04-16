#include <iostream>
using namespace std;

int x = 0;
int potencia(int base, int expo){
    int resp = 1;
    while(expo >0){
        resp = resp * base;
        expo = expo - 1;
    }
    return resp;
}

int main(){
    cout << potencia(2,3)<< endl;
}