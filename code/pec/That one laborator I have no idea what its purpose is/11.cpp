#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int 
    player1=1+rand()%6,
    player2=1+rand()%6;
    
  cout<<"player1 threw the dice: "<<player1<<endl;
  cout<<"player2 threw the dice: "<<player2<<endl;

  if (player1>player2){
      cout<<"player1's dice landed on a higher number"<<endl;
  } else if (player1<player2) {
      cout<<"player2's dice landed on a higher number"<<endl;
  } else {
      cout<<"both players dices landed on the same number"<<endl;
  }
}