#include <bits/stdc++.h>

using namespace std;

int main(void){
    long double n,m,a;
    unsigned long long int val;
    cin>>n>>m>>a;
    val = ceil(n/a) * ceil(m/a);
    cout<<val<<endl;
}