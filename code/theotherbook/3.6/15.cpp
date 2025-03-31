#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double p=1;
  for (int i=1; i<=n; i++) {
    p*=i/(i-1)-pow(cos(fabs(x)),i);
  }
  cout<<p<<endl;
}