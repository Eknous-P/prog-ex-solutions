#include <iostream.h>
void main() {
  int x[10];
  int n,i,k;
  cout<<"k=";cin>>k;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  int a=0;
  for (i=0; i<n; i++) {
    if (i%k==0) a++;
  }

  cout<<a<<endl;
}