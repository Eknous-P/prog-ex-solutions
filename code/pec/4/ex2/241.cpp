#include <iostream.h>
void main() {
  int x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  int s=0;
  for (i=0;i<n;i++) {
    if (x[i]%2==0)
      s+=x[i]*x[i];
  }
  cout<<s<<endl;
}