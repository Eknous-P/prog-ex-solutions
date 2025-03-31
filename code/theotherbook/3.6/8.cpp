#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double p=1,f=1;
  for (int i=1; i<=n; i++) {
    f*=i;
    p*=1+(sin(x)/f);
  }
  cout<<p<<endl;
}