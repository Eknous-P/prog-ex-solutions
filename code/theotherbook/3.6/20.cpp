#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    double f=1;
    for (int j=1; j<(2*i+1); j++) f*=j;
    s+=pow(x,2*i+1)/f;
  }
  cout<<s<<endl;
}