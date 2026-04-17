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
typedef long double lld;

void solve()
{
    int n;cin>>n;
    vector<pair<lld, lld>> vp;
    for(int i=0; i<n; i++)
    {
        lld x,y;cin>>x>>y;
        vp.pb({x,y});
    }
    
    lld xs, ys, xt, yt;cin>>xs>>ys>>xt>>yt;
    lld mainDist = sqrt((xs-xt)*(xs-xt) + (ys-yt)*(ys-yt));

    lld dist=LLONG_MAX;
    for(int i=0; i<n; i++)
    {
        lld a = vp[i].ff;
        lld b = vp[i].ss;
        lld temp = sqrt((a-xt)*(a-xt) + (b-yt)*(b-yt));

        dist = min(dist, temp);
    }
    if(dist > mainDist) YES;
    else NO;
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