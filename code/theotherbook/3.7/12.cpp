#include <iostream.h>
#include <cmath>

void main() {
    double S=1, sum=0, m, n, p, q;
    
    cout<<"m="; cin>>m;
    cout<<"n="; cin>>n;
    cout<<"p="; cin>>p;
    cout<<"q="; cin>>q;
    
    if (m<n) if (p<q) {
        for(double i=m; i<=n; i++) {
            for(double k=p; k<=q; k++) {
                if (i*k<1){
                    sum += exp(sqrt(1-i*k))+cos(i-k);
                }
            }
            S *= sum;
            sum=0;
        }
    }

    cout<<S<<endl;
}