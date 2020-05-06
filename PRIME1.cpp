#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int i,j;
    vector<bool> prime;
    prime.assign(100000,1);
    for(i=2;i<=1000;i++){
        if(prime.at(i)==1){
            for(j=i*i;j<=100000;j+=i){
                prime.at(j) = 0;
            }
        }
    }
    unsigned long long int k,t,min,max;
    prime[1]=0;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>min>>max;
        for(j=min;j<=max;j++){
            
        }

        for(k=min;k<=max;k++){
            if(prime.at(k)==1){
                cout<<k<<endl;
            }
        }  
        cout<<"\n";
    }
}