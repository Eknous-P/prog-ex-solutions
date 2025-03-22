#include <iostream.h>
#include <cmath>
void main() {
  double x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double m=0;
  for (i=0; i<n; i++) {
    if (x[i]<0) {
      m+=pow(x[i],2);
    }
  }

  m=sqrt(m);
  cout<<m<<endl;
}