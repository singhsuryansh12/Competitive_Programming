#include <bits/stdc++.h>
using namespace std;

bool isFibo(long long int n){
    long double y = sqrt(5*n*n - 4);
    long double y2 = sqrt(5*n*n + 4);
    if(fmod(y2,1)==0 ||  fmod(y,1)==0){
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(){
    long long int k,i,num=0;
    long double count;
    cin>>k;
    for(i=k,count=0;i>0;i--){
        if(isFibo(i)){
            num=i;
            count= i/((1+sqrt(5))/2.0);
            num= num + round(count);
            break;
        }
    }
    cout<<num;
}