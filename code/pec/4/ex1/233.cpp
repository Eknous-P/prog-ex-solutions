#include <iostream.h>
void main() {
  double x[10],a,b;
  int n,i;
  cout<<"a=";cin>>a;
  cout<<"b=";cin>>b;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  int m=0;
  for (i=0; i<n; i++) {
    if (x[i]>a) if (x[i]<b) m++;
  }

  cout<<m<<endl;
}