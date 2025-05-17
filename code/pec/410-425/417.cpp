#include <iostream.h>
void main() {
  int m;
  int i,j,k;
  cout<<"m=";cin>>m;
  cout<<"k=";cin>>k;
  int x[m][m];
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  int n=1;

  for (i=0; i<m; i++) {
    for (j=0; j<m-i; j++) {
      if (x[i][j]%k==0) {
        n*=x[i][j];
      }
    }
  }

  cout<<n<<endl;
}