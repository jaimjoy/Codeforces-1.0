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
    int n;cin>>n;
    vi v(n+1);
    v[0] = INT_MIN;
    for(int i=1; i<=n; i++) cin>>v[i];
    if(v[n] < v[n-1]) {minus; return;}
    if(is_sorted(all(v))) {cout<<0<<nl; return;}

    int op=0;
    vector<tuple<int,int,int>> vt;
    for(int i=1; i<n-1; i++)
    {
        v[i] = v[n-1]-v[n];
        op++;
        vt.pb({i, n-1, n});
    }
    if(!is_sorted(all(v))) {minus; return;}

    cout<<op<<nl;
    for(int i=0; i<vt.size(); i++)
    {
        cout<<get<0>(vt[i])<<' '<<get<1>(vt[i])<<' '<<get<2>(vt[i])<<nl;
    }
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //