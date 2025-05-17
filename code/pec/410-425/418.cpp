#include <iostream.h>
int main() {
  int m=0;
  int x[10][10];
  int i,j;

  cout<<"m=";
  do {cin>>m;} while (m<2||m>10);
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

  int n=0;

  for (i=0; i<m; i++) {
    for (j=0; j<=m-i-1; j++) {
      if (x[i][j]==0) n++;
    }
  }

  cout<<n<<endl;
  return 0;
}