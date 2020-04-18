#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n,a[1000],i,maxh,tower,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,temp=1;i<n;i++){
        if(a[i] == a[i+1]){
            temp++;
            continue;
        }
        tower++;
        if(temp > maxh)
            maxh=temp;
        temp=1;
    }
    cout<<maxh<<" "<<tower<<endl;
}