#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,i,n,k,num,fin;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        if(k%(n-1)==0){
            num = (k/(n-1))*n;
            cout<<num-1<<endl;
        }
        else{
            num = (k/(n-1))*n;
            fin = num + k%(n-1);
            cout<<fin<<endl;
        }
    }
}