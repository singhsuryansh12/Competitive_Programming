#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define present(c,x) (c.find(x) != c.end())
#define cpresent(c,x) (find(all(c),x) != c.end())
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

int main() {
    ios_base::sync_with_stdio(0);
    ll int t,colen, i, j, k=0, p, q, r, x, y, u,rowlen, v, n, m;
    cin>>t;
    fo(i,t){
        r=0;
        k=0;
        string s,str,row,column;
        cin>>s;
        if(cpresent(s,'R') && cpresent(s,'C') && (s[1]=='1' || s[1]=='2' || s[1]=='3' || s[1]=='4' || s[1]=='5' || s[1]=='6' || s[1]=='7' || s[1]=='8' || s[1]=='9')){
            rowlen = s.find('C') - 1;
            r=0;
            for(j=1;rowlen>=0;j++){
                row = row  + s[j];
                rowlen--;
            }
            r = stoi(row);
            colen= s.length() - s.find('C') - 1;
            for(j=s.find('C') +1;j<s.length();j++){
                column = column + s[j];
                colen--;
            }
            k=stoi(column);
            q=0;
            while(k!=0){
                p=k%26;
                if(p==0){
                    str[q++] = 'Z';
                    k= k/26;
                    k--;
                }
                else{
                    str[q++] = (p-1) + 'A';
                    k /= 26;
                }
            }
            for(j=q-1;j>=0;j--){
                cout<<str[j];
            }
            cout<<r<<endl;
        }
        else{
            k=0;
            string col,ro;
            for(j=0;s[j]!='1' && s[j]!='2' && s[j]!='3' && s[j]!='4' && s[j]!='5' && s[j]!='6' && s[j]!='7' && s[j]!='8' && s[j]!='9';j++){
                col = col + s[j];
            }
            colen = j;
            for(j=j-1,x=0;j>=0;j--,x++){
                p = (ll int)col[j] - (ll int)int('A') + 1;
                k = k + p*pow(26,x);
            }
            for(j=colen;j<s.length();j++){
                ro = ro + s[j];
            }
            cout<<'R'<<ro<<'C'<<k<<endl;
        }
    }
    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void ipgraph(int n, int m){
	int i, u, v;
	while(m--){
		cin>>u>>v;
		g[u-1].pb(v-1);
		g[v-1].pb(u-1);
	}
}

void dfs(int u, int par){
	for(int v:g[u]){
		if (v == par) continue;
		dfs(v, u);
	}
}


