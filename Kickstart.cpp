#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,x=0,n,count,temp,cur,k,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        x=0;
        long long int a[n],ind[n];
        for(j=0;j<n;j++){
            cin>>a[j];
            if(a[j]==k){
                ind[x]=j;
                x++;
            }
        }
        long long int xmax=x;
        count=0;
        for(x=0;x<xmax;x++){
            cur=k;
            temp=1;
            for(j=ind[x];cur>0;j++,cur--){
                if(a[j]==cur)
                    continue;
                else
                {
                    temp = 0;
                    break;
                }
            }
            if(temp==1){
                count++;
            }
        }
        cout<<"Case #"<<i+1<<": "<<count<<endl;
    }
}