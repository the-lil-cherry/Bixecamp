#include <iostream>
using namespace std;

int main(){
    int maior, y, i;
    cin >> maior;
    
    for (i = 1; i <=100; i++){
        
        cin >> y;
        if (y > maior){
            maior = y;
        }
        if (y == 0){
            i = 100;
        }
        

    }
    cout << maior << endl; 
}
