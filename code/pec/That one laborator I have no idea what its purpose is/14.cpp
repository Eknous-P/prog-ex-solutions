#include <iostream.h>
#include <time.h>
#include <stdlib.h>

void main() {
  srand(time(0));
  int n[7];
  for (int i=0; i<7; i++) {
      n[i]=0;
  }
  for (int i=0; i<5000; i++){
      n[rand()%6]++;
  } 
  cout<<"The amount of times the dice has fallen on:"<<endl;
  for(int i=0; i<6; i++) {
      cout<<i+1<<" "<<n[i]<<endl;
  }
}