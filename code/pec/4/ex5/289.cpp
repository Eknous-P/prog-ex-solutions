#include <iostream.h>
void main() {
  char x[10],y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  int j=0;
  for (i=0; i<n; i++) {
    if (x[i]>'k') {
      y[j]=x[i];
      j++;
    }
  }

  for (i=0; i<j; i++) cout<<y[i]<< " ";

  cout<<endl;
}