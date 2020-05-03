#include <bits/stdc++.h>

using namespace std;
unsigned long long int func(unsigned long long int a[],unsigned long long int n){
    unsigned long long int i,j,min=9999999;
    sort(a,a+n);
    for(i=0;;i++){
        for(j=0;j<n;j++){
            if(a[j]==i){
                break;
            }
        }
        return i;
    }
}
int main(void){
    unsigned long long int t,i,n,k,l;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        unsigned long long int a[n],j,sum=0;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        for(j=0;j<n;j++){
            for(k=1;k<n;k++){
                for(l=0;l<k;l++){
                    sum=sum+func(a,n);
                }    
            }
        }
    }
}