#include <iostream.h>
#include <cmath>

void main() {
    double S=0, prod=0, a;
    
    cout<<"a=";cin>>a;
    
    for(double i=1; i<=8; i++) {
        prod=0;
        for(double j=1; j<=8; j++) {
            prod+=cos(a*i + j);
        }
        S*=sin(i*i+1)*prod;
    }

    cout<<S<<endl;
}