#include <iostream>
using namespace std;
int main(){
    int Ca, Ba, Pa, Cr, Br, Pr, sem;
    cin >> Ca >> Ba >> Pa;
    cin >> Cr >> Br >> Pr;

    sem = 0;

    if(Cr > Ca){
        sem += Cr - Ca;
    }
    if(Br > Ba){
        sem += Br - Ba;
    }
    if(Pr > Pa){
        sem += Pr - Pa;
    }
    cout << sem << endl; 

}