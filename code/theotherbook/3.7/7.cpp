#include <iostream.h>
#include <cmath>

void main() {
    double Y=1, sum=0;
    
    for(int i=1; i<=10; i++) {
        for(int j=1; j<=7; j++) {
            sum += i+pow(j,2);
        }
        Y *= tan(pow(i,2)+1)*sum;
        sum = 0;
    }

    cout<<Y<<endl;
}