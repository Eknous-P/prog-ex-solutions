#include <iostream.h>
#include <cmath>

void main() {
    double S=0, prod=1;
    
    for(double i=10; i<=20; i++) {
        for(double j=1; j<=i; j++) {
            prod *= sin(i)+cos(j);
        }
        S += prod;
        prod=1;
    }

    cout<<S<<endl;
}