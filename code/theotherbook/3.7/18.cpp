#include <iostream.h>
#include <cmath>

void main() {
    double W=0, sum=0;
    
    for(double m=0; m<=5; m++) {
        sum=0;
        for(double n=1; n<=5; n++) {
            sum+=(n+m)/2;
        }
        W*=sum;
    }

    cout<<W<<endl;
}