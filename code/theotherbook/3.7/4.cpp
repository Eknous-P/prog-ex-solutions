#include <iostream.h>
#include <cmath>

void main() {
    double P=1, prod=1;
    for(double i=1; i<=15; i++) {
        for(double m=1; m<=6; m++) {
            prod *= i/(i+m);
        }
        P *= prod;
        prod = 1;
    }

    cout<<P<<endl;
}