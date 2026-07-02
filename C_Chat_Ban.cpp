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

ll rangeSum(ll n)
{
    return (1LL*n*n+n)/2;
}
void solve()
{
    ll n,k;cin>>n>>k;
    ll lo = 1, hi = 2*n - 1, ans = 2*n - 1;
    while(lo <= hi)
    {
        ll mid = (lo+hi)/2;
        ll midsum = 0;
        if(mid >= n)
        {
            midsum = rangeSum(n) + rangeSum(n-1) - rangeSum(2*n - 1 - mid);
        }
        else
        {
            midsum = rangeSum(mid);
        }

        if(midsum >= k)
        {
            ans = mid;
            hi = mid-1;
        }
        else 
        {
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