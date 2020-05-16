#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int group,t,i,n,count,temp;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        long long int e[n],j;
        for(j=0;j<n;j++){
            cin>>e[j];
        }
        group=0;
        sort(e,e+n);
        count=0;
        for(j=0;j<n;j++){
            temp = e[j];
            count++;
            if(count>=e[j]){
                group++;
                count=0;
            }
        }
        cout<<group<<endl;
    }
}