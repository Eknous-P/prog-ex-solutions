#include <iostream>
using namespace std;
int main() {
  int m;
  int i,j;
  cout<<"m=";cin>>m;
  int x[m][m];
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  int n=0;

  for (i=0; i<m; i++) {
    for (j=i; j<m; j++) {
      if (x[i][j]%5==2) {
        n++;
      }
    }
  }

  cout<<n<<endl;
  return 0;
}