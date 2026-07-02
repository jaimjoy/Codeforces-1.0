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

int ans;
int dfs(int node, vector<int> adj[], string s)
{
    // edge condition-> Leaf ?? 
    if(adj[node].size() == 0)
    {
        return (s[node-1] == 'W') ? 1 : -1;
    }

    int points = 0;
    for(auto child:adj[node])
    {
        points += dfs(child, adj, s);
    }
    points += (s[node-1] == 'W') ? 1 : -1;// Own node
    if(points == 0) ans++;

    return points;
}
void solve()
{
    int n;cin>>n;
    vector<int> adj[n+1];
    for(int parent,child=2; child<=n; child++)
    {
        cin>>parent;
        adj[parent].pb(child);
    }
    string s;cin>>s;

    ans = 0;
    dfs(1, adj, s);

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