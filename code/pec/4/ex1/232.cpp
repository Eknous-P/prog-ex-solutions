#include <iostream.h>
void main() {
  double x[10],c,d;
  int n,i;
  cout<<"c=";cin>>c;
  cout<<"d=";cin>>d;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  double m=1;
  for (i=0; i<n; i++) {
    if (x[i]>=c) if (x[i]<d) m*=x[i];
  }

  cout<<m<<endl;
}