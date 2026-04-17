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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    ll n,k,x;cin>>n>>k>>x;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));

    vl diff;
    for(int i=0; i<n-1; i++)
    {
        ll d = v[i+1]-v[i];
        if(d > x)
        {
            diff.pb(d);
        }
    }
    sort(all(diff));

    int ans = diff.size() + 1;//total groups
    for(int i=0; i<diff.size(); i++)
    {
        ll have = diff[i]/x + (diff[i]%x != 0) - 1;
        if(have <= k) ans--, k -= have;
        else break;
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    // ll tc;cin>>tc;
    solve();
    // for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //