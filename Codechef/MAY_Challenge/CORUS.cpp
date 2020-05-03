#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,i,n,q,c,j,k,extra,count,arr[100000],m,msize;
    string s;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>q;
        cin>>s;
        sort(s.begin(),s.end());
        for(j=0;j<q;j++){
            cin>>c;
            extra=0;
            if(j==0){
                for(k=0,m=0,count=1;k<s.size();m++){
                    count = s.rfind(s[k]) - k + 1;
                    arr[m]=count;
                    k=k+count;
                    if(count>=c){
                        extra = extra + count - c;
                    }
                }
                msize=m;
            }
            else{
                extra=0;
                for(m=0;m<msize;m++){
                    if(arr[m] > c){
                        extra=extra + arr[m] - c;
                    }
                }
            }
            cout<<extra<<endl;
        }
    }
}