#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,n,i,j,val,count=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(count=0;n>=2;){
            for(j=floor(sqrt(n));(3*j*j +j)/2 < n;j++){
            }
            val=(3*j*j +j)/2;
            if(val>n){
                j=j-1;
            }
            val=(3*j*j +j)/2;
            n=n-val;
            count++;
        }
        cout<<count<<endl;
    }
}