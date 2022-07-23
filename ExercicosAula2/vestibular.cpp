#include <iostream>
using namespace std;
int main(){
    int nota, acu = 0;
    cin >> nota;
    string resp, gaba;
    cin >> gaba >> resp;
    for(int i = 0; i<nota; i++){
        if(gaba[i] == resp[i]){
            acu ++;
        }
    }

    cout << acu << endl;

    
}