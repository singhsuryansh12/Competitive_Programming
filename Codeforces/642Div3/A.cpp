#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,n,m,i,maxs,x,temp,temp2;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>m;
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(n==2){
            cout<<m<<endl;
            continue;
        }
        // if(m==n){
        //     cout<<2*m<<endl;
        //     continue;
        // }
        // if(n%2==0){
        cout<<m*2<<endl;
            // if(m%2==0){
            //     x=(n-2)/2;
            //     temp=m/x;
            //     temp2= m - temp*(x-1);
            //     maxs= temp*(x-1)*2 + temp2*2;
            //     cout<<maxs<<endl;
            // }
            // else{
            //     x=n/2;
            //     temp=m/x;
            //     temp2= m - temp*(x-1);
            //     maxs= temp*(x-1)*2 + temp2*2;
            //     cout<<maxs<<endl;
            // }
        // }
        
        // else{
        //     if(m%2==0){
        //         n--;
        //         x=(n-2)/2;
        //         temp = m/x;
        //         temp2 = m - temp(x/2);
        //         maxs = temp*(x/2)*2 + temp2*(x/2)*2;
        //         cout<<maxs<<endl;
        //     }
        //     else{
        //         n--;
        //         x=n/2;
        //         temp=m/x;
        //         temp2= m - temp*(x-1);
        //         maxs= temp*(x-1)*2 + temp2*2;
        //         cout<<maxs<<endl;
        //     }
        // }
    }
}