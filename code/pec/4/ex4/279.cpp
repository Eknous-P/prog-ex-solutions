#include <iostream.h>
void main() {
  double X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  double s=0;
  for (i=0; i<n/2; i+=2) {
    s+=X[i]+Y[i+1];
  }
  cout<<s<<endl;
}