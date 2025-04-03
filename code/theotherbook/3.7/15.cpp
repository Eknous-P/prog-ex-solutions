#include <iostream.h>
#include <cmath>

void main() {
    double Z=0, sum=0, v, n;
    
    cout<<"v=";cin>>v;
    cout<<"n=";cin>>n;
    
    for(int k=1; k<=n; k++) {
        for(int i=1; i<=k; i++) {
            sum += v*i + k;
        }
        Z += (k+5)*sum;
        sum=0;
    }

    cout<<Z<<endl;
}