#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    s+=cos((2*i-1)*x)/pow(2,2*i-1);
  }
  cout<<s<<endl;
}