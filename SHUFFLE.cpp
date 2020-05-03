#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,i,n,k;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        unsigned long long int a[n],j,m,temp;
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        if(k==1){
            cout<<"yes"<<endl;
            continue;
        }
        for(j=0;j<n;j++){
            for(m=0;m<n-k;m++){
                if(a[m] > a[m+k]){
                    temp = a[m];
                    a[m] = a[m+k];
                    a[m+k] =temp;
                }
            }
        }
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                cout<<"no"<<endl;
                break;
            }
        }
        if(j==n-1){
            cout<<"yes"<<endl;
        }
    }
}