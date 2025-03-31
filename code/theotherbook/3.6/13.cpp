#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0, f=1;
  for (int i=1; i<=n; i++) {
    f *= i;
    s+=pow(2*x+1,i)/((i+5)*log(x*x+1));
  }
  cout<<s<<endl;
}