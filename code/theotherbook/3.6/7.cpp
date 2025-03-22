#include <iostream.h>
#include <cmath>
void main() {
  int n;
  double x;
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  double s=0;
  for (int i=1; i<=n; i++) {
    s+=i/(pow(4,i)+pow(fabs(x),i+2));
  }
  cout<<s<<endl;
}