#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=0; i<=n; i++) {
    double f=1;
    for (int j=1;j<=i;j++) f*=j;
    s+=(1/f)+sqrt(fabs(x));
  }
  cout<<s<<endl;
}