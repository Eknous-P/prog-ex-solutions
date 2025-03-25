#include <iostream.h>
int main() {
  double X[10],Y[10];
  int n,i;
  cout<<"n=";cin>>n;
  for (i=0; i<n; i++) {
    cout<<"X["<<i<<"]=";cin>>X[i];
    cout<<"Y["<<i<<"]=";cin>>Y[i];
  }

  double sx=0,py=1;

  for (i=0; i<n; i++) {
    sx+=X[i];
    py*=Y[i];
  }

  cout << sx/py << endl;

  return 0;
}