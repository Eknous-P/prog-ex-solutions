#include <iostream.h>
void main() {
  int m=4;
  int x[4][4];

  cout<<"m=";cin>>m;
  for (int i=0; i<m; i++) {
    for (int j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  int c=0;

  for (int i=0; i<m; i++) {
    for (int j=0; j<i; j++) {
      if (x[i][j]%2==0) c++;
    }
  }

  cout<<c<<endl;
}