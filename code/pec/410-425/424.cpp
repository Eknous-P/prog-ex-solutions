#include <iostream.h>
void main() {
  int m;
  int i,j,min=5.4,max=15.3;
  cout<<"m=";cin>>m;
  
  int x[m][m];
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

    
  int n=0;

  for (i=0; i<m; i++) {
    for (j=m-i; j<m; j++) {
      if (min<x[i][j]<max) {
        n+=x[i][j];
      }
    }
  }

  cout<<n<<endl;
}
