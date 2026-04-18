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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    vi v(m);
    map<int,int> mp;
    vector<int> ans;
    for(int i=0; i<m; i++) 
    {
        cin>>v[i];
        mp[v[i]] = 1;
        ans.pb(v[i]);
    }

    int last = 1;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            last++;
            if(!mp[last])
            {
                ans.pb(last);
                mp[last] = 1;
            }
        }
        else
        {
            last++;
            while(mp[last]) last++;
            mp[last] = 1;
            ans.pb(last);
            last++;
            while(mp[last]) last++;
        }
    }
    sort(all(ans));
    cout<<ans.size()<<nl;
    for(auto u:ans) cout<<u<<' ';
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
