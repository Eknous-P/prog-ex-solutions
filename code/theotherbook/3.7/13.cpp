#include <iostream.h>
#include <cmath>

void main() {
    double Z=0, sum=0, c;
    
    cout<<"c="; cin>>c;
    
    for(int i=1; i<=5; i++) {
        for(int k=1; k<=8; k++) {
            sum += (c*i+k)/k;
        }
        Z += pow(i,2)*sum;
        sum=0;
    }

    cout<<Z<<endl;
}