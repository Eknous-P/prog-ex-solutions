#include <iostream.h>
void main() {
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
    for (j=0; j<m-1-i; j++) {
      if (x[i][j]%2==0) {
        n+=x[i][j];
      }
    }
  }

  cout<<n<<endl;
}