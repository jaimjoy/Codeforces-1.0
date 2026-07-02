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

bool ok(ll n, vector<pair<int,int>> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].ff < n) n += v[i].ss;
        else return 0;
    }
    return 1;
}
void solve()
{
    int n;cin>>n;
    vector<pair<int,int>> v;
    while(n--)
    {
        int k;cin>>k;
        int mx=0;
        for(int a,i=0; i<k; i++)
        {
            cin>>a;
            a = a-i+1;
            mx = max(mx, a);
        }
        v.pb({mx, k});
    }

    sort(all(v));
    ll ans=0;
    ll lo=1, hi=10000000000;
    while(lo <= hi)
    {
        ll mid = (lo+hi)/2;
        if(ok(mid, v)) 
        {
            hi = mid-1;
        }
        else 
        {
            ans = mid;
            lo = mid+1;
        }
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //