#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=0; i<=n; i++) {
    s+=pow(fabs(2*x+i),i+1)/((i+1)*(i+2));
  }
  cout<<s<<endl;
}