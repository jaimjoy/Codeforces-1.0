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
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

int N = 150000+5;
map<int, vector<int>> mp;
void solve()
{
    int n;cin>>n;
    vl v(n);
    ll ans=0;
    for(int i=0; i<n; i++) cin>>v[i];
    if(n == 1) {cout<<0<<nl; return;}
    if(n == 2) {cout<<max(v[0],v[1])-min(v[0],v[1])<<nl; return;}

    vector<ll> pre(n, 0);
    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1]+v[i];

    for(auto k:mp[n])
    {
        ll mn=LLONG_MAX, mx=LLONG_MIN;
        for(int i=k-1; i<n; i+=k)
        {
            ll diff = pre[i]-(i>=k ? pre[i-k] : 0);
            mn = min(mn, diff);
            mx = max(mx, diff);
        }
        ans = max(ans, mx-mn);
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    for(int i=1; i<=N; i++)
    {
        for(int j=1; i*j<=N; j++)
        {
            mp[i*j].pb(i);
        }
    }
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
