#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int r,c,ci,cj,j,x;
    cin>>r>>c>>ci>>cj;
    for(int i=0;i<=ci;i++){
        for(j=0;j<i;j++){
            x=abs(cj-j);
            cout<<x<<" ";
        }
        for(j=i;j<abs(c-i);j++){
            x = abs(ci-i);
            cout<<x<<" "; 
        }
        for(j=abs(c-i);j<c;j++){
            x=abs(cj-j);
            cout<<x<<" ";
        }
        cout<<endl;
    }
    for(int i=ci-1;i>0;i--){
        for(j=0;j<i;j++){
            x=abs(cj-j);
            cout<<x<<" ";
        }
        for(j=i;j<abs(c-i);j++){
            x = abs(ci-i);
            cout<<x<<" "; 
        }
        for(j=abs(c-i);j<c;j++){
            x=abs(cj-j);
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
