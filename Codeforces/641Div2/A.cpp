#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int j,sum,t,n,k,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        if(n%2==0){
            sum= n + 2*k;
            cout<<sum<<endl;
        }
        else{
            for(j=3;j<=n;j++){
                if(n%j==0){
                    break;
                }
            }
            sum = n + j + 2*(k-1);
            cout<<sum<<endl;
        }
    }
}