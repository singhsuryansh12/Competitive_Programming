#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,i,n,val;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        n=(n-1)/2;
        val = (8*n*(n+1)*(2*n + 1))/6;
        cout<<val<<endl;
    }
}