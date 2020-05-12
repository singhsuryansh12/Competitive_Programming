#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int a,b,t,i,dig,cyc;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b;
        cyc = b%4;
        if(b==0){
            cout<<1<<endl;
        }
        else if(cyc==0){
            dig = ((long long int)pow(a,4))%10;
            cout<<dig<<endl;
        }
        else{
            dig = ((long long int)pow(a,cyc))%10;
            cout<<dig<<endl;
        }
    }
}