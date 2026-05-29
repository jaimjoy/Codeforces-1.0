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

bool cmp(tuple<ll,ll,ll> c1, tuple<ll,ll,ll> c2)
{
    //IF (compression of c1 * weight of c2) IS GREATER THEN (weight of c1 * compression of c2) THEN TRUE
    ll w = get<0>(c1);
    ll ww = get<0>(c2);
    ll c = get<2>(c1);
    ll cc = get<2>(c2);

    return c*ww > w*cc;
}
void solve()
{
    int n;cin>>n;
    vector<tuple<ll,ll,ll>> v(n);
    ll w=0;
    for(int i=0; i<n; i++) 
    {
        // a = w
        // b = v
        // c = c
        ll a,b,c;cin>>a>>b>>c;
        w+=a;
        v[i] = {a,b,c};
    }
    sort(all(v), cmp);

    ll ans1=0;
    for(auto u:v)
    {
        w-=get<0>(u);
        ll tot = get<2>(u) * w;
        ans1 += get<1>(u) - tot;
    }
    cout<< ans1 <<nl;
}

int main()
{
    optimize();
    solve();
    // ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //