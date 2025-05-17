#include <iostream.h>
#include <cmath>
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
  double c=0;

  for (i=0; i<m; i++) {
    for (j=0; j<m-i; j++) {
      if ((i+j)%2==1) {
        n+=pow(x[i][j],2);
        c++;
      }
    }
  }

  cout<<sqrt(n/c)<<endl;
}
