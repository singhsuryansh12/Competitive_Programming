#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    string s, rpn;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        rpn.clear();
        stack<char> exp;
        for(int j=1;j<s.size();j++){
            if(s[j]==')'){
                rpn.push_back(exp.top());
                exp.pop();
            }
            else if(s[j]=='+' || s[j]=='-' || s[j]=='*' || s[j]=='/' || s[j]=='^'){
                exp.push(s[j]);
            }
            else if(s[j]=='('){
            }
            else{
                rpn.push_back(s[j]);
            }
        }
        cout<<rpn<<endl;
    }
}
