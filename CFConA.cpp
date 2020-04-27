#include <bits/stdc++.h>
using namespace std;

int main(void){
    unsigned long long int sum,t,i,x,y,a,b;
    cin>>t;
    for(i=0;i<t;i++){
        sum=0;
        cin>>x>>y;
        cin>>a>>b;
        if(b<2*a){
            if(x>y){
                sum= y*b + a*(x-y);
            }
            else{
                sum= x*b + a*(y-x);
            }
            cout<<sum<<endl;
        }
        else{
            sum = (x+y)*a;
            cout<<sum<<endl;
        }
    }
}