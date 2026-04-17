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
 
void solve()
{
    ll n,m,a,b,temp;cin>>n>>m>>a>>b;
    temp = m;
    vector<pair<ll,ll>> sto;
    ll f=0,fff=0,s=0,sss=0;
    for(int i=1; i<=n; i++)
    {
        ll x,y;cin>>x>>y;
        if(i == a) f=x, s=y;
        else if(i == b) fff=x, sss=y;
        if(temp > 0) sto.pb({x,y});
        temp--;
    }

    ll ans = llabs(f-fff) +  llabs(s-sss);
    ll l=LLONG_MAX, r=LLONG_MAX;
    for(int i=0; i<sto.size(); i++)
    {
        ll x = sto[i].ff;
        ll y = sto[i].ss;
        l = min(l, llabs(f-x)+llabs(s-y));
        r = min(r, llabs(fff-x)+llabs(sss-y));
    }
    if(sto.empty()) cout<<ans<<nl;
    else cout<<min(ans,l+r)<<nl;
}
 
int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //