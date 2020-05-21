#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int xprev,a,b,c,d,x,y,z,count=0,zrange,prev,yrange;
    cin>>a>>b>>c>>d;
    if(a==b && b==c && c==d){
        cout<<1<<endl;
    }
    else{
        zrange = d-c+1;
        yrange = c-b+1;
        for(x=a;x<=b;x++){
            xprev=count;
            for(y=b;y<=c;y++){
                prev=count;
                for(z=d;z>=c;z--){
                    if(x+y > z){
                        count = count + z - c + 1;
                        break;
                    }
                }
                if(count>=prev+zrange){
                    count=count + (c-y)*zrange;
                    break;
                }
            }
            if(count>=xprev + yrange*zrange){
                count = count + (b-x)*yrange*zrange;
                break;
            }
        }
        cout<<count<<endl;
    }
}