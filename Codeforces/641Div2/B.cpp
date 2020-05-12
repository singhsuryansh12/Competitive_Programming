#include <bits/stdc++.h>
using namespace std;
int counter(unsigned long long int n,unsigned long long int i, unsigned long long int s[],unsigned long long int count,unsigned long long int j,unsigned long long int start,unsigned long long int check){
    if(j>=n)
        return count;
    if(s[i]>=s[j] && j<n){
        ++check;
        return counter(n,start,s,1,check,start,check);
    }
    count++;
    return counter(n,j,s,count,j+j+1,start,check);
}
int main(){
    unsigned long long int t,n,s[1000000],i,count,j,maxc,itr,k,x;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>s[j];
        }
        for(x=0,count=1,maxc=1;x<n;x++){
            for(j=x,count=1;j<n;j++){
                count=1;
                // count = counter(n,j,s,count,j+j+1,j,1);
                itr = j;
                for(k=(itr*2)+1;k<n;k+=itr+1){
                    if(s[k] > s[itr]){
                        cout<<s[itr]<<" "<<s[k]<<endl;
                        count++;
                        itr = k-j;
                    }
                }
                if(count>maxc){
                    maxc=count;
                }
            }
        }
        cout<<maxc<<endl;
    }
}

//for any pair of adjacent models this should hold