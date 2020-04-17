#include <bits/stdc++.h>

using namespace std;

int main(void){
    int i,arr[4],tri=0,seg=0,j,u,v,x;
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(i=0;i<2;i++){
        for(j=i+1;j<3;j++){
            if(arr[i]+arr[j] > arr[j+1]){
                u=arr[i];
                v=arr[j];
                x=arr[j+1];
                if((u+x>v) && (v+x>u)){
                    tri++;
                    break;
                }    
            }
            else if(arr[i]+arr[j] == arr[j+1]){
                seg++;
            }
        }
    }
    if(tri>0){
        cout<<"TRIANGLE"<<endl;
    }
    else if(seg>0){
        cout<<"SEGMENT"<<endl;
    }
    else{
        cout<<"IMPOSSIBLE"<<endl;
    }
}