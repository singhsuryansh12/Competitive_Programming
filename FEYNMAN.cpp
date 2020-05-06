#include <bits/stdc++.h>
using namespace std;
int main(){
    for(;;){
        long long int n,sum=0;
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=1;i<=n;i++){
            sum = sum + i*i;
        }
        cout<<sum<<endl;
        /*
        4.1 + 3.4 + 2.9 + 1.16
         _ _ _ _
        |_|_|_|_|
        |_|_|_|_|
        |_|_|_|_|
        |_|_|_|_|
        */
    }
}