#include <iostream>
using namespace std;

int main(){
    int h, p, f, d, andando;
    cin >> h >> p >> f >> d;
    andando = f;
    while (andando != h){
            andando +=d;
            if (andando == p){
                cout << "N" << endl;
                break;
            }

            if (andando == -1){
                andando = 15;
            }
            if(andando == 16){
                andando = 0;
            }
    }
    if(andando == h){
        cout<< "S"<< endl;
    }
  
}