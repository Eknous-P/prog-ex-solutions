#include <iostream.h>
void main() {
  char x[10],y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  for (i=0; i<n/2; i++) {
    y[i]=x[2*i+1];
  }

  for (i=0; i<n; i++) cout<<y[i]<< " ";

  cout<<endl;
}