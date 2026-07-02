//  In the name of Almighty Allah
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MOD = 998244353;
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
ll modPow(ll a,ll b){ll res=1;while(b){if(b&1)res=(res*a)%MOD;a=(a*a)%MOD;b/=2;}return res;}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

bool pal(string s)
{
    if(s.size() == 1) return 0;
    int i=0, j=s.size()-1;
    while(i<j)
    {
        if(s[i] != s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    if(pal(s) || s.size() == 1)
    {
        cout<<1<<nl;
        return;
    }

    string t;
    for(int i=0; i<n; i++)
    {
        if(t.empty()) t.pb(s[i]);
        else
        {
            if(t.back() != s[i]) t.pb(s[i]);
        }
    }

    if(t[0] != t[t.size()-1] && t.size() == 2) cout<<2<<nl;
    else cout<<1<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //