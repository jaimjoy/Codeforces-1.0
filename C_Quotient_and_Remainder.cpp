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
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    ll n,k;cin>>n>>k;
    vl q(n), r(n);
    for(int i=0; i<n; i++) cin>>q[i];
    for(int i=0; i<n; i++) cin>>r[i];

    sort(all(q));
    sort(all(r));
    int ans=0;
    int lo=0, hi=n-1;
    while(lo < n && hi >= 0)
    {
        ll Q = q[lo];
        ll R = r[hi];

        ll y = R + 1;
        ll x = Q * y + R;
        if(x > k) hi--;
        else lo++, hi--, ans++;
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
