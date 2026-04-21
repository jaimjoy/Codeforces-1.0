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
    int n,x,y;cin>>n>>x>>y;
    vi v(n+1,0);
    for(int i=1; i<=n; i++) cin>>v[i];

    vector<int> LR, inner;
    for(int i=x+1; i<=y; i++) inner.pb(v[i]);
    for(int i=1; i<=n; i++)
    {
        if(i <= x || i > y) LR.pb(v[i]);
    }

    auto mn = min_element(all(inner));
    rotate(inner.begin(), mn, inner.end());

    int pos=LR.size();
    for(int i=0; i<LR.size(); i++)
    {
        if(LR[i] > inner.front())
        {
            pos = i;
            break;
        }
    }

    for(int i=0; i<pos; i++) cout<<LR[i]<<' ';
    for(int i=0; i<inner.size(); i++) cout<<inner[i]<<' ';
    for(int i=pos; i<LR.size(); i++) cout<<LR[i]<<' ';
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
