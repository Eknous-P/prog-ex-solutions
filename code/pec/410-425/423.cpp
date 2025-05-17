#include <iostream.h>
void main() {
  int m;
  int i,j,a,b;
  cout<<"m=";cin>>m;
  cout<<"a=";cin>>a;
  b=a-1;
  while(a>b){
    cout<<"b=";cin>>b;
  }
  
  int x[m][m];
  for (i=0; i<m; i++) {
    for (j=0; j<m; j++) {
      cout<<"x["<<i<<"]["<<j<<"]=";cin>>x[i][j];
    }
  }

    
  int n=0;

  for (i=0; i<m; i++) {
    for (j=0; j<m-1-i; j++) {
      if (a<x[i][j]<b) {
        n++;
      }
    }
  }

  cout<<n<<endl;
}
