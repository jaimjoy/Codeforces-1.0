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
    ll n;cin>>n;

    ll sum = (n*n+n)/2;
    if(sum&1) {NO; return;}

    map<int,int> mp;
    int j=n;
    vi a;
    ll need = (sum >> 1);
    while(need >= j)
    {
        mp[j]=1;
        a.pb(j);
        need -= j;
        j--;
    }
    if(need > 0)
    {
        mp[need] = 1;
        a.pb(need);
    }

    YES;
    cout<<a.size()<<nl;
    for(auto u:a) cout<<u<<' ';
    cout<<nl;

    cout<<n-a.size()<<nl;
    for(int i=1; i<=n; i++)
    {
        if(!mp[i]) cout<<i<<' ';
    }
}

int main()
{
    optimize();
    solve();
    // ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
