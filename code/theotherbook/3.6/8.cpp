#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double p=0;
  for (int i=1; i<=n; i++) {
    double f=1;
    for (int j=1;j<=i;j++) f*=j;
    p*=1+(sin(x)/f);
  }
  cout<<p<<endl;
}