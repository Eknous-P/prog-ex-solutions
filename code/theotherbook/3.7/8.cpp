#include <iostream.h>
#include <cmath>

void main() {
    double S=0, prod=1;
    
    for(double i=1; i<=10; i++) {
        for(double j=1; j<=7; j++) {
            prod *= (i+j)/(i*j);
        }
        S += prod;
        prod = 1;
    }

    cout<<S<<endl;
}