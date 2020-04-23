#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t,n,a,b,c,d,i;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>a>>b>>c>>d;
        int xl = a-b;
        int xh = a+b;
        int pl = c-d;
        int ph = c+d;
        if(xh*n < pl){
            cout<<"No"<<endl;
            continue;
        }
        else if(xl*n > ph){
            cout<<"No"<<endl;
            continue;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
}