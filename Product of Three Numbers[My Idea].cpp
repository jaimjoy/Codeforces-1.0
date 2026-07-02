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

void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> v;
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            int cnt=0;
            while(n%i == 0) n/=i, cnt++;
            v.pb({i, cnt});
        }
    }
    if(n > 1) v.pb({n, 1});
    
    if(v.size() == 1)
    {
        if(v[0].ss >= 6) 
        {
            YES;
            cout<<v[0].ff<<' '<<modPow(v[0].ff, 2)<<' '<<modPow(v[0].ff, v[0].ss-3)<<nl;
        }
        else NO;
        return;
    }

    if(v.size() > 0)
    {
        ll a=v[0].ff, b=v[1].ff, c=-1;
        ll k = 1;
        k *= modPow(v[0].ff, v[0].ss-1);
        k *= modPow(v[1].ff, v[1].ss-1);
        for(int i=2; i<v.size(); i++)
        {
            k *= modPow(v[i].ff, v[i].ss);
        }
        c = k;
        
        if(a==-1 || b==-1 || c==-1) NO;
        else if(a==1 || b==1 || c==1) NO;
        else if(a==b || a==c || b==c) NO;
        else 
        {
            YES;
            cout<<a<<' '<<b<<' '<<c<<nl;
        }
    }
    else NO;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //