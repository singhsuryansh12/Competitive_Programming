#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,i,x,j;
    vector<int> a;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        for(j=0;j<n;j++){
            cin>>x;
            a.push_back(x);
        }
        if(n==k){
            cout<<k<<endl;
            for(j=0;j<n;j++){
                cout<<a.at(j)<<" ";
            }
            cout<<endl;
            continue;
        }
        for(j=0;j<n-k;j++){
            for(m=j,sum=0;j<j+k-1;m++){
                sum = sum + a.at(m);
            }
            if(j==0){
                pre =sum;
            }
            else if(pre == sum){
                continue;
            }
            else{
                break;
            }
        }
        if(j==n-k){
            cout<<k<<endl;
            for(j=0;j<n;j++){
                cout<<a.at(j)<<" ";
            }
            cout<<endl;
            continue;
        }
        for(j=0;j<n;j++){
            
        }
    }
}