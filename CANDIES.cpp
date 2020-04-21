#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,i,j,n,x,k;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=1,k=1;;j++){
            k=k + pow(2,j);
            if(n%k==0){
                x=n/k;
                cout<<x<<endl;
                break;
            }
        }
    }
}