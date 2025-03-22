#include <iostream.h>
#include <cmath>

void main() {
    double W=0, a, sum=0;
    
    cout<<"a=";cin>>a;
    
    for(int k=1; k<=9; k++) {
        for(int m=1; m<=5; m++) {
            sum += a*pow(m,2)+pow(k,2);
        }
        W += sum;
        sum = 0;
    }

    cout<<W<<endl;
}