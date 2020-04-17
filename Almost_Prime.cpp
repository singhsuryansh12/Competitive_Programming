#include <iostream>

using namespace std;

int main(void){
    int n,i,j,count,num=0,k,arr[3000];
    cin>>n;
    for(i=2,k=0;i<=n;i++){
        count=0;
        for(j=2;j<=(i/2);j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            arr[k] = i;
            k++;
        }
    }

    for(i=2;i<=n;i++){
        count=0;
        for(j=0;j<k;j++){
            if(i%arr[j]==0){
                count++;
                if(count>2){
                    break;
                }
            }
        }
        if(count==2){
            num++;
        }
    }
    cout<<num<<endl;
}