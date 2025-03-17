#include <iostream.h>
#include <cmath>
void main() {
  double x[10],k;
  int n,i;
  cout<<"k=";cin>>k;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  int m=0;
  for (i=0; i<n; i++) {
    if (fabs(x[i])<k) m++;
  }

  cout<<m<<endl;
}