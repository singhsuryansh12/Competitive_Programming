#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,i,n,k,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        if(n%2==0){
            if(k%2==0){
                if(k > n){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    for(j=1;j<k;j++){
                        cout<<1<<" ";
                    }
                    cout<<(n-(k-1))<<endl;
                }
            }
            else{
                if(k*2 > n){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    for(j=1;j<k;j++){
                        cout<<2<<" ";
                    }
                    cout<<(n-((k-1)*2))<<endl;
                }
            }
        }
        else{
            if(k%2==0 || k>n){
                cout<<"NO"<<endl;
                continue;
            }
            else{
                cout<<"YES"<<endl;
                for(j=1;j<k;j++){
                    cout<<1<<" ";
                }
                cout<<(n-(k-1))<<endl;
            }
        }
    }
}