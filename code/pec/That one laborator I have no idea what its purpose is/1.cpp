#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n;
  
  for(int i=0; i<10; i++) {
      n=rand()%21;
      cout<<n<<endl;
  }
}