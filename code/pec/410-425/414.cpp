#include <iostream.h>
void main() {
  int m=4;
  int x[4][4];
  int i,j;

  cout<<"m=";cin>>m;
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  double c=0;
  int n=0;

  for (i=0; i<m; i++) {
    for (j=0; j<=i; j++) {
      if (x[i][j]%2==1) {
        c+=x[i][j];
        n++;
      }
    }
  }

  cout<<c/n<<endl;
}