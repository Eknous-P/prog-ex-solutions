#include <iostream.h>
#include <cmath>
void main() {
  double x[10],t;
  int n,i;
  cout<<"t=";cin>>t;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double m=1;
  for (i=0; i<n; i++) {
    if (fabs(x[i])<t) m*=x[i];
  }

  cout<<m<<endl;
}