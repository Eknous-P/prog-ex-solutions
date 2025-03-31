#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    s+=(pow(4,i+1)*pow(x+1,i))/(pow(n,2)+2*n+3);
  }
  cout<<s<<endl;
}