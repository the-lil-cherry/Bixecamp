#include <iostream>
using namespace std;

int main (){
    string s;
    cin >> s;
    cout << s[1] << endl;

    for (int i = 0; i<s.length(); i++){
        cout << s[i]<< endl;
    }
}