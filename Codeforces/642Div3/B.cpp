#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,k,j,sum=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        int a[n], b[n];
        for(j=0,sum=0;j<n;j++){
            cin>>a[j];
            sum =sum+ a[j];
        }
        for(j=0;j<n;j++){
            cin>>b[j];
        }
        for(j=0;j<k;j++){
            if(*max_element(b,b+n)>*min_element(a,a+n)){
                sum=sum - *min_element(a,a+n) + *max_element(b,b+n);
                a[min_element(a,a+n)-a] = 1000;
                b[max_element(b,b+n)-b] = -1;
            }
            else{
                cout<<sum<<endl;
                break;
            }
        }
        if(j==k)
            cout<<sum<<endl;
    }
}