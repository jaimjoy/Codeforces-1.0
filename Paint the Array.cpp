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
    int n;cin>>n;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll g1=0, g2=0;
    for(int i=0; i<n; i++)
    {
        if(i%2 == 0) g1 = gcd(g1, v[i]);
        else g2 = gcd(g2, v[i]);
    }
    if(g1 == g2) {cout<<0<<nl; return;}

    bool f=0;
    for(int i=0; i<n; i++)
    {
        if(g1 == 1) break;
        if(i&1 && v[i]%g1 == 0) {f=1; break;}
    }
    if(!f && g1 > 1) {cout<<g1<<nl; return;}

    f=0;
    for(int i=0; i<n; i++)
    {
        if(g2 == 1) break;
        if(i%2 == 0 && v[i]%g2 == 0) {f=1; break;}
    }
    if(!f && g2 > 1) cout<<g2<<nl;
    else cout<<0<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
