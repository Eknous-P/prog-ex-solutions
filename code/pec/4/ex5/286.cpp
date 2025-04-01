#include <iostream.h>
void main() {
  char x[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  bool t=false;
  for (i=0; i<n; i++) {
    if (x[i]=='r') t=true;
  }

  cout<<t?"true\n":"false\n";
}