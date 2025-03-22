#include <iostream.h>
#include <cmath>

void main() {
    double W=1, a, sum=0;
    
    cout<<"a=";cin>>a;cout<<endl;
    
    for(int m=1; m<=5; m++) {
        for(int n=0; n<=6; n++) {
            sum += pow(a, m+n);
        }
        W *= sum;
        sum = 0;
    }

    cout<<W<<endl;
}