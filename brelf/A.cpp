#include <iostream>
using namespace std;


int main() {
    int T;
    cin >> T;

    while(T--) {
        int tam;
        string s;
        cin >> tam;
        cin >> s;

        int resp = 0;
        for (int i = 1; i < tam; i++) {
            if (s[i] == '0') {
                if (s[i - 1] == '0') resp += 2;
                else if (i > 1 && s[i - 2] == '0') resp++;
            }
        }

        cout << resp << '\n';
    }
}