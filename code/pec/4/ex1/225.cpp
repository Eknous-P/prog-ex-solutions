#include <iostream.h>
void main() {
  double x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double s=0;
  for (i=0; i<n; i+=2) {
    s+=x[i];
  }

  cout<<s<<endl;
}