#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,i,n,a[200000],j;
    cin>>t;
    cout<<(t%4 + 4)%4<<endl;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;;j++){
            cin>>a[j];
        }
        for(j=-n;j<=n;j++){
            ind= (j%n + n)%n;
            j=j + a[ind];
        }
    }

}