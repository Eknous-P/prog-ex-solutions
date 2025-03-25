#include <iostream.h>
void main() {
  double X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  double mx=0,my=0;
  for (i=0; i<n; i++) {
    mx+=X[i];
    my+=Y[i];
  }
  mx/=n;my/=n;
  cout<<mx*my<<endl;
}