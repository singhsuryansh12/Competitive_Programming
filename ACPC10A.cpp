#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,c,d;
    for(;;){
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0){
            break;
        }
        if(c-b==b-a){
            d= c + (b-a);
            cout<<"AP "<<d<<endl;
        }
        else{
            d = c*b/a;
            cout<<"GP "<<d<<endl;
        }        
    }
}