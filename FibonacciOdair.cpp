#include <iostream>
using namespace std;
int main (){
    int a, b, c, f, n;
    a = 0;
    b = 1;
    f = 1;
    cin >> n;
    
    while(n != 0){
        if(n !=0){
            n -=1;
            c = a +b;
            f = c;
            if (n != 0){
                n -=1;
                a = b+c;
                f = a;
                if (n != 0){
                    n -=1;
                    b = c+a;
                    f = b;
                }
            }
        }
    }
    cout << f << endl; 
}