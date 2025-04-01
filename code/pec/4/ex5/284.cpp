#include <iostream.h>
void main() {
  char x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  int s=0;
  for (i=0; i<n; i++) {
    if (x[i]>'h') s+=i;
  }

  s/=n;

  cout<<s<<endl;
}