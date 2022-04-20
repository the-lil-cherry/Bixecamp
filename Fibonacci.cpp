#include <iostream>
using namespace std;

int main(){
    int n, acu, result, n1 = 0, n2 = 1;
    cin >> n;
    result = 1;
    while (n !=0){
        n -=1;
        result = n1 + n2; 
        n1 = n2;
        n2 = result;
    }
    cout << result << endl; 
}