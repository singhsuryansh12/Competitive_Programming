#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,arr[10],i,j,count,max,min;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>arr[j];
        }
        for(j=0,count=1,max=0,min=11;j<=n-1;j++){
            if(j==n-1){
                if(count>max){
                    max=count;
                }
                if(count<min){
                    min = count;
                }
            }
            else if(arr[j+1] - arr[j] > 2){
                if(count>max){
                    max=count;
                }
                if(count<min){
                    min = count;
                }
                count =1;
            }
            else{
                count++;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
}