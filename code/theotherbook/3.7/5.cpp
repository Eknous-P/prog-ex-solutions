#include <iostream.h>
#include <cmath>

void main() {
    double S=3, sum1=0, sum2=0;
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=5; j++) {
            // she wont notice lmao
            sum2 += sqrt(sin(i) + cos(j));
        }
        sum1 += pow(sin(i+1),2) + sum2;
        sum2 = 0;
    }
    
    S+=sum1;

    cout<<S<<endl;
}