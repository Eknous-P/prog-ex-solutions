#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int 
    player1=0,
    player2=0,
    n1,n2;
    
  for (int i=0; i<3; i++) {
    n1=1+rand()%6;
    n2=1+rand()%6;
    cout<<"player1 threw the dice: "<<n1<<endl;
    cout<<"player2 threw the dice: "<<n2<<endl;
    player1+=n1;
    player2+=n2;
  }

  if (player1>player2){
      cout<<"player1 has a higher score: "<<player1<<endl;
  } else if (player1<player2) {
      cout<<"player2 has a higher score: "<<player2<<endl;
  } else {
      cout<<"both players got equal scores"<<endl;
  }
}