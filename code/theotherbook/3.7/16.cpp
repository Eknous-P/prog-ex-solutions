#include <iostream.h>
#include <cmath>

void main() {
    double Y=0, sum=0, f;
    
    cout<<"f=";cin>>f;
    
    for(int i=1; i<=12; i++) {
        for(int j=1; j<=7; j++) {
            sum += f*i + j*j;
        }
        Y*=(i+1)*sum;
        sum=0;
    }

    cout<<Y<<endl;
}