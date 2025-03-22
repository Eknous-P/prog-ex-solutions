#include <iostream.h>
#include <cmath>

void main() {
    double S=0, sum=0, x, y;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    for(int i=1; i<=7; i++) {
        for(int j=1; j<=8; j++) {
            if (cos(j)+sin(i)>=0){
                sum += y*pow(x,i-j);
            }
        }
        S += sum;
        sum = 0;
    }

    cout<<S<<endl;
}