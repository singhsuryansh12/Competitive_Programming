#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,i,sum=0;
    cin>>n;
    for(i=1;i*i<=n;i++){
        sum=sum+ floor(n/i) - (i-1);      
    }
    cout<<sum<<endl;
}
/*
    vector<int> prime(n,1);
    for(i=2;i<=sqrt(n);i++){
        if(prime[i-1]==1){
            for(j=i*i;j<=n;j+=i){
                if(prime[j-1]==1)
                    prime[j-1]++;
            }
            for(j=4;pow(i,j)<=n;j+=2){
                prime[pow(i,j)-1]++;
            }
        }
    }
    cout<<accumulate(prime.begin(),prime.end(),0)<<endl;
*/