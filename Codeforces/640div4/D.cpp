#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,i,j,moves,a,b,x,y,aprev,bprev,turn,count;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        vector<int> ac;
        for(j=0;j<n;j++){
            cin>>x;
            ac.push_back(x);
        }
        aprev = ac[0];
        turn=1;
        bprev=0;
        count=n-1;
        moves=1;
        a=aprev;
        b=0;
        for(x=1,y=n-1;count>0;){
            if(turn==1){
                while(bprev <= aprev){
                    bprev = bprev + ac[y];
                    y--;
                    count--;
                    if(count<=0)
                        break;
                }
                moves++;
                b = b + bprev;
                aprev=0;
                turn=0;
            }
            else{
                while(aprev<=bprev){
                    aprev = aprev + ac[x];
                    x++;
                    count--;
                    if(count<=0)
                        break;
                }
                moves++;
                a = a + aprev;
                bprev =0;
                turn=1;
            }
        }
        cout<<moves<<" "<<a<<" "<<b<<endl;
    }
}