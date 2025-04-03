#include <iostream.h>
#include <cmath>

void main() {
    double Z=0, prod=1, c;
    
    cout<<"c=";cin>>c;
    
    for(int i=1; i<=7; i++) {
        for(int k=1; k<=8; k++) {
            prod *= pow(i,2)+c*k;
        }
        Z += prod;
        prod=1;
    }

    cout<<Z<<endl;
}