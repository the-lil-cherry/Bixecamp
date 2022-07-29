#include <iostream>
using namespace std;

int main(){
    int n, soma1 = 0, igual = 0, resp = 0;
    cin >> n;
    int q[n][n];

    for(int i = 0; i<n; i++){
        soma1 = 0;
        for(int j = 0; j<n ;j++){
            cin >> q[i][j];
            soma1 += q[i][j]; 
            if(i == 0 && j == (n-1)){
                igual = soma1;
            }
        }
        if(soma1 != igual){
            resp = -1;
        }
        else{
            resp = igual;
        }
    }

    for(int i = 0; i<n; i++){
        soma1 = 0;
        for(int j = 0; j<n ; j++){
            soma1 += q[j][i];
        }
        if(soma1 == igual && resp != -1){
            resp = igual;
        }
        else{
            resp = -1;
        }
    }
    soma1 = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i == j){
                soma1 += q[i][j];
            }
        }
    }
    if(soma1 == igual && resp != -1){
            resp = igual;
    }
    else{
            resp = -1;
    }

    soma1 =0;

    for(int i = 0; i< n; i++){
        soma1 += q[i][n - 1 -i];
    }
    
    if(soma1 == igual && resp != -1){
        resp = igual;
    }
    else{
            resp = -1;
    }
    cout << resp << endl;
}