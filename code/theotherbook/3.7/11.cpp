#include <iostream.h>
#include <cmath>

void main() {
    double S=0, sum=0;
    
    for(double i=1; i<=20; i++) {
        for(double j=1; j<=30; j++) {
            sum += (i+j)/(i*j+3);
        }
        S += sum;
        sum=0;
    }

    cout<<S<<endl;
}