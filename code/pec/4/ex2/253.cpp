#include <iostream.h>
#include <cmath>
void main() {
  int x[10];
  int n,i,t;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  cout<<"t=";cin>>t;
  int c=0;
  for (i=0;i<n;i++) {
    if (x[i]%t==0) c++;
  }
  cout<<c<<endl;
}