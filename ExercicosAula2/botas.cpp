#include <iostream>
using namespace std;

int main(){
    int n, par = 0;
    cin >> n;
    string bota[n][2];
    for(int i = 0; i<n;i++){
        for(int j = 0; j<2; j++){
            cin >> bota[i][j];
        }
    }
   for(int i = 0; i<n;i++){
        for(int j = 1; j<n; j++){
           if(bota[i][0] == bota [j][0]){
               if(bota[i][1] != bota[j][1]){
                   par +=1;
                   bota[i][0] = '0';
                   bota[j][0] = '0';
                   bota[i][1] = 'a';
                   bota[j][1] = 'a';
               }
           } 
        }
    }

     for(int i = 0; i<n;i++){
        for(int j = 0; j<2; j++){
            cout << bota[i][j];
        }
        cout <<  endl;
    }
    cout << par << endl;
}