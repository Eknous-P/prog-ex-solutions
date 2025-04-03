#include <iostream.h>
#include <cmath>

void main() {
    double P=1, prod=1;
    for(int i=1; i<=15; i++) {
        for(int m=1; m<=6; m++) {
            prod *= i/(i+m);
        }
        P *= prod;
        prod = 1;
    }

    cout<<P<<endl;
}