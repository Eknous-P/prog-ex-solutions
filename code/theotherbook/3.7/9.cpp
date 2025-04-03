#include <iostream.h>
#include <cmath>

void main() {
    double S=0, sum=0;
    
    for(int i=1; i<=10; i++) {
        for(int j=1; j<=8; j++) {
            sum += sqrt(pow(i,2)+pow(j,2));
        }
        S += pow(i,2) + sum;
        sum=0;
    }

    cout<<S<<endl;
}