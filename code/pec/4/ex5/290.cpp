#include <iostream.h>
void main() {
  char x[10],y[20];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"x["<<i<<"]=";cin>>x[i];
  }

  int j=0;
  for (i=0; i<n; i++) {
    y[j]=x[i];
    j++;
    if (x[i]=='f') {
      y[j]='f';
      j++;
    }
  }

  for (i=0; i<j; i++) cout<<y[i]<< " ";

  cout<<endl;
}