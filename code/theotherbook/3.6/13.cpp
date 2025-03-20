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
    s+=pow(2*x+1,i)/((i+5)*log(x*x+1));
  }
  cout<<s<<endl;
}