#include <iostream.h>
void main() {
  int m=4;
  int x[4][4];
  int i,j,k;

  cout<<"k=";cin>>k;
  cout<<"m=";cin>>m;
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  int c=0;

  for (i=0; i<m-1; i++) {
    for (j=0; j<i; j++) {
      if (x[i][j]%k==0) c++;
    }
  }

  cout<<c<<endl;
}