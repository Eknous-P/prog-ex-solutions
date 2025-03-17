#include <iostream.h>
void main() {
  double x[10];
  int n,i,j;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double max=0;
  for (i=0; i<n; i++) {
    if (x[i]>max) {
      max=x[i];
      j=i;
    }
  }

  cout<<max+j<<endl;
}