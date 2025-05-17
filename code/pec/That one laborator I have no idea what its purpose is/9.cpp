#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n, num=0;

  for (int i=0; i<1000; i++){
    n=rand()%2;
    if (n) {
      num++;
    }
  }
  
  cout<<"amount of zeros:"<<1000-num<<endl;
  cout<<"amount of ones:"<<num<<endl;
}