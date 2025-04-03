#include <iostream.h>
#include <cmath>

void main() {
    double S=3, sum=0;
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=5; j++) {
            sum += sqrt(sin(i) + cos(j));
        }
        S += pow(sin(i+1),2) + sum;
        sum = 0;
    }

    cout<<S<<endl;
}