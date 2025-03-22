#include <iostream.h>
#include <cmath>

void main() {
    double S=1, sum=0, m, n, p, q, e=2.71;
    
    cout<<"m="; cin>>m; cout<<"n="; cin>>n; cout<<endl;
    while (m>=n){
        cout<<"n="; cin>>n; cout<<endl;
    }
    cout<<"p="; cin>>p; cout<<"q="; cin>>q; cout<<endl;
    while (p>=q){
        cout<<"q="; cin>>q; cout<<endl;
    }
    
    for(double i=m; i<=n; i++) {
        for(double k=p; k<=q; k++) {
            if (i*k<1){
                sum += pow(e,sqrt(1-i*k))+cos(i-k);
            }
        }
        S *= sum;
        sum=0;
    }

    cout<<S<<endl;
}