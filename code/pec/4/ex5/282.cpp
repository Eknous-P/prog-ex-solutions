#include <iostream.h>
void main() {
  char x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  bool t;
  int c=0;
  for (i=0; i<n; i++) {
    if (x[i]=='b') c++;
  }

  t=c>=n/2;

  cout<<t?"true\n":"false\n";
}