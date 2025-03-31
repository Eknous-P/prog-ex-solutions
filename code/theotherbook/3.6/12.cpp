#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0, f=1;
  for (int i=1; i<=n; i++) {
    f*=i;
    s+=(1/f)+sqrt(fabs(x));
  }
  cout<<s<<endl;
}