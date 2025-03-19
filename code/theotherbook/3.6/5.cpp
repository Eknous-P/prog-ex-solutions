#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    s+=pow(log(x*x+3),i)/(i*(2*n+1));
  }
  cout<<s<<endl;
}