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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

vector<int> factors(int n)
{
    vector<int> fact;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i) continue;
        if(i != 1) fact.pb(i);
        if(n/i != i) fact.pb(n/i);
    }
    return fact;
}

void solve()
{
    int n;cin>>n;
    vl vis(n+1);
    for(int x,i=0; i<n; i++)
    {
        cin>>x;
        vis[x] = 1;
    }
    
    vector<int> dp(n+1, 1e9);//saxy dp :)
    for(int i=1; i<=n; i++)
    {
        if(vis[i]) {dp[i] = 1; continue;}

        vector<int> temp = factors(i);
        for(auto u:temp)
        {
            if(vis[u])
            {
                dp[i] = min(dp[i], 1+dp[i/u]);
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        (dp[i] != 1e9) ? cout<<dp[i] : cout<<-1;
        cout<<' ';
    }
    cout<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //