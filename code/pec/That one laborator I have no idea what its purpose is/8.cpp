#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n=rand()%2;
  
  if (n) {
      cout<<1<<endl;
  } else {
      cout<<0<<endl;
  }
}