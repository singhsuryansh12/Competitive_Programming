#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,i,j,l,r;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        vector<int> a(n,0);
        r=n;
        l=1;
        for(j=1;j<=n;j++){
            if((r-l+1)%2==0){
                a[(l+r)/2 - 1] = j;
                
            }
            else{
                mid=(l+r-1)/2;
                a[mid] = j;
                l=mid+
            }
        }
    }
}