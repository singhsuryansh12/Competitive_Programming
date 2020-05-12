#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int i,j,t,m,n,k;
    vector<bool> isPrime(100000,1);
    for(i=2;i<=100000;i++){
        if(isPrime[i]){
            for(j=i*i;j<=100000;j+=i){
                isPrime[j]=0;
            }
        }
    }
    vector<int> prime;
    for(i=2;i<=isPrime.size();i++){
        if(isPrime[i]){
            prime.push_back(i);
        }
    }
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        vector<bool> sieve(m-n+1,1);
        for(j=0;prime[j]*(long long)prime[j] <= m;j++){
            long long int curprime = prime[j];
            long long int base = floor(n/curprime) * curprime;
            if(base<n){
                base= base + curprime;
            }
            for(k=base;k<=m;k+=curprime){
                sieve[k-n]=0;
            }
            if(base==curprime){
                sieve[base-n]=1;
            }
            if(n==1){
                sieve[0]=0;
            }
        }
        for(j=0;j<sieve.size();j++){
            if(sieve[j]){
                cout<<n+j<<endl;
            }
        }        
    }
}