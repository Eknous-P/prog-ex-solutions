#include <iostream.h>
void main() {
  double x[10];
  int n,i,k=0;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double m=0;
  for (i=0; i<n; i++) {
    if (x[i]<0) {
      m+=x[i];
      k++;
    }
  }

  m/=k;
  cout<<m<<endl;
}