#include <iostream.h>
#include <cmath>

void main() {
    double W=1, sum=0;
    
    for(int m=0; m<=6; m++) {
        for(int n=1; n<=5; n++) {
            sum+=(n+m)/2;
        }
        W*=sum;
        sum=0;
    }

    cout<<W<<endl;
}