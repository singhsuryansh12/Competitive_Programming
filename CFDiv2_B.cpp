#include <bits/stdc++.h>

using namespace std;

int main(void){
    unsigned long long int t,i,n,k;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        unsigned long long int a[n],j,peak,maxp=0,finl=0,l,x,v=0,valv=0,val[n];
        for(j=0;j<n;j++){
            cin>>a[j];
            if(j>0 && a[j]>a[j-1]){
                x=j;
            }
            if(j==x+1 && a[j]<a[j-1]){
                val[v]=x;
                v++;
            }
        }
        valv=v;
        for(l=0;(l+k-1)<n;l++){
            for(v=0,peak=0;v<valv;v++){
            if(val[v]>l && val[v]<(l+k-1)){
                peak++;
            }
            }
            if(peak > maxp){
                maxp=peak;
                finl= l;
            }
        }
        cout<<(maxp+1)<<" "<<(finl+1)<<endl;
    }
}
/*for(j=l+1,peak=0;j<(l+k-1);j++){
                if(a[j] > a[j-1]){
                    if(a[j] > a[j+1]){ 
                        peak++;
                    }
                }
            }
            if(peak > maxp){
                maxp=peak;
                finl= l;
            }*/