#include <iostream.h>
void main() {
  int X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }
  int sx=0,sy=0;
  for (i=0; i<n; i++) {
    if (X[i]%2==1) sx+=X[i];
    if (Y[i]%2==0) sy+=Y[i];
  }
  cout<<sx-sy<<endl;
}