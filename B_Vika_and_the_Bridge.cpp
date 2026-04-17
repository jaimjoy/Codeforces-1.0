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
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int k,n;cin>>n>>k;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,vector<int>> mp;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]].empty()) mp[v[i]].pb(0);
        mp[v[i]].pb(i+1);
    }

    int ans=n;
    for(auto &u:mp)
    {
        u.ss.pb(n+1);
        int a=0, b=0;
        for(int i=1; i<u.ss.size(); i++)
        {
            int dif = u.ss[i] - u.ss[i-1] - 1;

            if(dif > a) 
            {
                b = a;
                a = dif;
            }
            else if(dif > b) b = dif;
        }
        ans = min(ans, max(a/2, b));
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