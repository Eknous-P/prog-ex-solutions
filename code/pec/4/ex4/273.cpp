#include <iostream.h>
void main() {
  double X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  int c=0;
  for (i=0; i<n; i++) {
    if (X[i]>0) c++;
    if (Y[i]>0) c++;
  }
  cout<<c<<endl;
}