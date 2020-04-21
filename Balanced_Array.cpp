#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,i,n,hn,val,j,arr[200000],sum,k;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        if(n%4 != 0){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            hn = n/2;
            for(j=0,sum=0;j<hn;j++){
                arr[j]=2*(j+1);
                sum = sum + arr[j];
            }
            val = sum/hn;
            for(j=2,k=0;k<(hn/2);k++){
                arr[hn+k] = val - j;
                j=j+2;
            }
            for(j=2,k=0;k<(hn/2);k++){
                arr[3*hn/2 + k] = val + j;
                j=j+2;
            }
            cout<<"YES"<<endl;
            for(j=0;j<n;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
}