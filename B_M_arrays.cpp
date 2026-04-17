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
    int n,m;cin>>n>>m;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]%m]++;

    int ans=0;
    for(auto u:mp)
    {
        if(u.ff == 0) ans++;
        else if(mp[m-u.ff] == 0) ans += u.ss;
        else if(u.ff == m-u.ff) ans++;
        else if (m-u.ff > u.ff)
        {
            int a = mp[u.ff];
            int b = mp[m-u.ff];
            if(abs(a-b) <= 1) ans++;
            else 
            {
                if(a < b) swap(a,b);
                a -= (b+1);
                ans++;
                ans += a;
            }
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