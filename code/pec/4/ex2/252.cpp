#include <iostream.h>
#include <cmath>
void main() {
  int x[10];
  int n,i,m;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  cout<<"m=";cin>>m;
  int s=0;
  for (i=0;i<n;i++) {
    if (x[i]%m==0) s*=x[i];
  }
  cout<<s<<endl;
}