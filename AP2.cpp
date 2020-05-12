#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,d,a,j,t,i,third,last3,sum;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>third>>last3>>sum;
        n=((2*sum)/(third + last3));
        d=(last3 - third)/(n-5);
        a=third - 2*d;
        cout<<n<<endl;
        for(j=1;j<=n;j++){
            cout<<(a + (j-1)*d)<<" ";
        }
        cout<<endl;
    }
}
