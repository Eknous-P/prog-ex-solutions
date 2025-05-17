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
    for (j=m-1-i; j<m; j++) {
      if ((i+j)%2==1) {
        n++;
      }
    }
  }

  cout<<n<<endl;
}
