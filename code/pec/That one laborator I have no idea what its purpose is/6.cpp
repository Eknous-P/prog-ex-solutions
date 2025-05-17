#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n=1+rand()%20,correct=false,guess;
  
  for(int i=0; i<5; i++) {
      cout<<"guess the number:";cin>>guess;
      if (guess==n){
          correct=true;
          break;
      }
  }
  if (correct) {
      cout<<"chisht e"<<endl;
  } else {
      cout<<"sxal e"<<endl;
  }
}