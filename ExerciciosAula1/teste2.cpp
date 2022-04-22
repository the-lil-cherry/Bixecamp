#include <iostream>
using namespace std;
int main () {

int n,x=1;
int somal[n], somac[n];
int m[n][n];
int torre[n*n];
cin >> n;

for (int i = 0; i<n; i++)
{
    for (int j = 0; j<n ; j++)
    {
      cin >> m[i][j];
    }
}

for (int i = 0; i<n; i++)
{
    for (int j = 0; j<n ; j++)
    {
      somal[i] += m[i][j];
      somac[j] += m[j][i];
    }
}


for (int k = 0; k<n*n; k++) {
  for (int i = 0; i<n; i++) {
    for (int j = 0; j<n ; j++) {
      torre[k] = (somal[i] + somac[j] - m[i][j]);
      if (x< torre[k]) {x = torre[k];}

}
}
}

cout << x << endl;


return 0;
}
