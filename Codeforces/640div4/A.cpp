#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,dig,i,n,j,arr[10000],count=0,size;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0,count=0;n!=0;){
            dig=n%10;
            n=n/10;
            count++;
            if(dig!=0){
                arr[j] = dig*pow(10,count-1);
                j++;
            }
        }
        size = j;
        cout<<size<<endl;
        for(j=0;j<size;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}