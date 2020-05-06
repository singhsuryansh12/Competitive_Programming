#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,i,n,m;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        if(n==m && n==2){
            cout<<"YES"<<endl;
        }
        else if(n==1 || m==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}