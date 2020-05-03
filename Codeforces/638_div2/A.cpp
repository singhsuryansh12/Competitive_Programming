#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int t,n,i,a,b,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        a=pow(2,n);
        b=0;
        if(n==2){
            cout<<2<<endl;
            continue;
        }
        else{
            for(j=1;j<n/2;j++){
                a=a+pow(2,j);
            }
            for(j=n/2;j<n;j++){
                b=b+pow(2,j);
            }
            cout<<a-b<<endl;
        }    
    }
}