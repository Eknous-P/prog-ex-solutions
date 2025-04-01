#include <iostream.h>
#include <cmath>

void main() {
    double S=0, sum=0;
    
    for(double i=0; i<=6; i++) {
        sum=0;
        for(double j=1; j<=5; j++) {
            sum+=cos(j*j)+i;
        }
        S+=pow(sin(i+1),2)+sum;
    }

    cout<<S<<endl;
}