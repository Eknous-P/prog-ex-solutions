#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int num, n;
  while(true){
      num=0;
      for (int i=0; i<2; i++) {
          n=1+rand()%6;
          cout<<"Your dice landed on: "<<n<<endl;
          num+=n;
      }
      if(num==7 || num==11){
          cout<<"you win"<<endl;
          break;
      }
      else if (num==2 || num==3 || num==12){
          cout<<"you lose"<<endl;
          break;
      }
      else {
          cout<<"rolling again"<<endl;
      }
  }
}