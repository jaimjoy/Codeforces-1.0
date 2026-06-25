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

const int mod = 998244353;
void solve()
{
    string s;cin>>s;

    int cons=1;
    ll mul = 1;
    int res = 1;
    ll ans=0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i] == s[i-1]) cons++;
        else
        {
            ans += cons-1;
            mul *= cons;
            mul %= mod;
            cons = 1;
        }
    }

    if(cons > 1) ans += cons-1;
    mul *= cons;
    mul %= mod;

    // calculating ans!
    for(int i=1; i<=ans; i++)
    {
        mul *= i;
        mul %= mod;
    }

    cout<<ans<<' '<<mul<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
