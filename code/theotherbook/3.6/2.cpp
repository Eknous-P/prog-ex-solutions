#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    s+=sin(3*x+2*i+2)/pow(3,2*n+2);
  }
  cout<<s<<endl;
}