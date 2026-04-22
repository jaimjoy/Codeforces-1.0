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

#define mod 998244353
ll zero(ll x)
{
    if(x >= 3) return 2 + ((x-3)/4);
    return 1;
}
ll one(ll x)
{
    if(x >= 1) return 1 + ((x-1)/4);
    return 0;
}
void solve()
{
    ll n,x;cin>>n>>x;
    ll upore0 = zero(x-1);
    ll niche0 = zero(n) - upore0;
    ll zeroPair = ((upore0 % mod) * (niche0 % mod)) % mod;

    ll upore1 = one(x-1);
    ll niche1 = one(n) - upore1;
    ll onePair = ((upore1 % mod) * (niche1 % mod)) % mod;

    cout<< (zeroPair + onePair) % mod <<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
