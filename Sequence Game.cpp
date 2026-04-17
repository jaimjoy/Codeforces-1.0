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
    ll n;cin>>n;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll x;cin>>x;
    if(n == 1 && v[0] != x) {NO; return;}
    if(n == 1 && v[0] == x) {YES; return;}
    
    bool f=0;
    for(int i=0; i<n-1; i++)
    {
        ll a = max(v[i], v[i+1]);
        ll b = min(v[i], v[i+1]);
        if(x >= b && x <= a) {f=1;}
    }
    if(f) YES;
    else NO;
}
 
int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //