#include <iostream>

using namespace std;

int main(void){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n,mind=999,minf=999,s,j,p[100],df[100];
        cin>>n>>s;
        for(j=0;j<n;j++){
            cin>>p[j];
        }
        for(j=0;j<n;j++){
            cin>>df[j];
            if(df[j]==0){
                if(p[j]<mind){
                    mind = p[j];
                }
            }
            else{
                if(p[j]<minf){
                    minf = p[j];
                }
            }
        }
        if(minf + mind <= (100-s)){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }

    }
}