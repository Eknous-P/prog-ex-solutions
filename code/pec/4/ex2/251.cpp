#include <iostream.h>
void main() {
  int x[10];
  int n,i,k;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  cout<<"k=";cin>>k;
  int s=0;
  for (i=0;i<n;i++) {
    if (x[i]%k==0) s+=x[i];
  }
  cout<<s<<endl;
}