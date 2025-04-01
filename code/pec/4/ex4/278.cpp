#include <iostream.h>
void main() {
  int X[10],Y[10];
  int n,i,k;
  cout<<"k=";cin>>k;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  int c=0;
  for (i=0; i<n; i++) {
    if (X[i]%k==0) c++;
    if (Y[i]%k==0) c++;
  }
  cout<<c<<endl;
}