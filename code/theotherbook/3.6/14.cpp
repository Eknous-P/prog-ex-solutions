#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=0; i<=n; i++) {
    s+=pow(sin(x),i)/i;
  }
  cout<<s<<endl;
}