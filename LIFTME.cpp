#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int t, q, n,sum,j,inp,pre,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>q;
        cin>>sum;
        pre=sum;
        for(j=1;j<2*q;j++){
            cin>>inp;
            sum = sum + abs(inp - pre);
            pre = inp;
        }
        cout<<sum<<endl;
    }
}