#include <iostream.h>
void main() {
  double x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }
  int a=0,b=0;
  for (i=0; i<n; i++) {
    if (x[i]>0) a++;
    else if (x[i]<0) b++;
  }

  cout<<a<<", "<<b<<endl;
}