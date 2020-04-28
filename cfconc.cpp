#include <bits/stdc++.h>

using namespace std;

unsigned long long int lcm(unsigned long long int l, unsigned long long int r){
    unsigned long long int lc = (l*r)/(__gcd(l,r));
    return lc;
}

int main(void){
    unsigned long long int countr=0,countl=0,t,i,a,b,j,q,l,r;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>a>>b>>q;
        for(j=0;j<q;j++){
            cin>>l>>r;
            if(r >= max(a,b)){
                countr = (r/lcm(a,b))*(lcm(a,b) - max(a,b));
                if(r%lcm(a,b) >= max(a,b))
                    countr = countr + r%lcm(a,b) - max(a,b) +1;      
            }
            else
            {
                countr =0;
            }
            if ((l-1) >= max(a,b)){
                countl = ((l-1)/lcm(a,b))*(lcm(a,b) - max(a,b));
                if((l-1)%lcm(a,b) >= max(a,b))
                    countl = countl + (l-1)%lcm(a,b) - max(a,b) +1; 
            }
            else
            {
                countl=0;
            }
            cout<<countr-countl<<" ";
        }
        cout<<endl;
    }
}