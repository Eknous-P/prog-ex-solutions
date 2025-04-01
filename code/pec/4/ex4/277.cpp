#include <iostream.h>
void main() {
  int X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  int s=0;
  for (i=0; i<n; i++) {
    if (X[i]%7==0) s+=X[i];
    if (Y[i]%7==0) s+=Y[i];
  }
  cout<<s<<endl;
}