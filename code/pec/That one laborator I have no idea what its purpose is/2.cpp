#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n,a,b;
  
  cout<<"a=";cin>>a;
  cout<<"b=";cin>>b;
  
  for(int i=0; i<30; i++) {
      n=a+rand()%b;
      cout<<n<<endl;
  }
}