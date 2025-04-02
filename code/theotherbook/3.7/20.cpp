#include <iostream.h>
#include <cmath>

void main() {
    double S=0, sum=0, b;

    cout<<"b=";cin>>b;
    
    for(double k=0; k<=6; k++) {
        for(double j=1; j<=5; j++) {
            sum+=tan(b*k+j*j);
        }
        S+=(k+1)*sum;
        sum=0;
    }

    cout<<S<<endl;
}