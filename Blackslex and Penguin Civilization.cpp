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

bool cmp(ll a, ll b)
{
    if(__builtin_ctz(~a) > __builtin_ctz(~b)) return 1;
    if(__builtin_ctz(~a) < __builtin_ctz(~b)) return 0;
    return a < b;
}
void solve()
{
    int n;cin>>n;
    ll sz = pow(2, n);
    vl v;
    for(int i=0; i<sz; i++) v.pb(i);
    sort(v.begin(), v.end(), cmp);
    for(int i=0; i<v.size(); i++) cout<<v[i]<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
