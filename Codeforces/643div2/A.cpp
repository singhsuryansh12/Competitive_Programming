#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int t,a,i,k,num,min,max,dig,j;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>k;
        for(j=2;j<=k;j++){
            num=a;
            for(min=11,max=0;num>0;){
                dig = num%10;
                num=num/10;
                if(dig>max){
                    max=dig;
                }
                if(dig<min){
                    min = dig;
                }
            }
            a=a + min*max;
            if(min==0){
                break;
            }
        }
        cout<<a<<endl;
    }
}
