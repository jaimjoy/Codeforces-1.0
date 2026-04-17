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
    int n;cin>>n;
    vl v(n);
    for(int i=0; i<n-1; i++) cin>>v[i];

    ll total = (1LL*n*n + n)/2;
    if(v[n-2] > total) {NO; return;}

    vector<int> p;
    p.pb(v[0]);
    for(int i=1; i<n-1; i++)
    {
        p.pb(v[i]-v[i-1]);
    }
    set<int> vis;
    ll extra = 0;
    vector<int> r;
    for(int i=0; i<p.size(); i++)
    {
        if(p[i] <= n && vis.count(p[i]) == 0) vis.insert(p[i]);
        else extra+=p[i];
    }

    if(v[n-2] != total)
    {
        p.pb(total-v[n-2]);
        vis.insert(p.back());
        for(int i=1; i<=n; i++)
        {
            if(vis.count(i) == 0) {NO; return;}
        }
        YES;
        return;
    }
    else
    {
        set<int> missed;
        for(int i=1; i<=n; i++) 
        {
            if(vis.count(i) == 0) missed.insert(i);
        }
        
        if(missed.size() != 2) {NO; return;}
        if(*missed.begin()+*missed.rbegin() == extra) YES;
        else NO;
    }
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //