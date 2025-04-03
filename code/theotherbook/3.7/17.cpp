#include <iostream.h>
#include <cmath>

void main() {
    double S=0, prod=1, a;
    
    cout<<"a=";cin>>a;
    
    for(int i=1; i<=8; i++) {
        for(int j=1; j<=8; j++) {
            prod*=cos(a*i + j);
        }
        S+=sin(i*i+1)*prod;
        prod=1;
    }

    cout<<S<<endl;
}