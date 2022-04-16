#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    while(k>0){
        if(n%10 !=0){
            n -=1;
        }
        else{
            n = n/10;
        }
        k -=1;
    }
    cout << n << endl;

}