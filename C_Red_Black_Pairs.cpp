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
    int n;cin>>n;
    string a,b;cin>>a>>b;

    vector<int> dp(n, INT_MAX);
    for(int i=0; i<n; i++)
    {
        // উপর-নিচে + আগের DP
        dp[i] = (a[i] != b[i]) + (i ? dp[i-1] : 0);

        // পাশা-পাশি + আগের DP
        if(i)
        {
            dp[i] = min(dp[i], (a[i] != a[i-1]) + (b[i] != b[i-1]) + (i > 1 ? dp[i-2]:0));
        }
    }

    cout<<dp[n-1]<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
