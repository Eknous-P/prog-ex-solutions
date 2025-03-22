#include <iostream.h>
#include <cmath>
void main() {
  int x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double s=0;
  for (i=0;i<n;i++) {
    if (x[i]%5==0) {
      s+=x[i]*x[i];
    }
  }
  s=sqrt(s);
  cout<<s<<endl;
}