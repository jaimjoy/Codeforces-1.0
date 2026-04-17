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
    int n;
    string s;cin>>n>>s;
    map<char,int> mp;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a') mp['a']++;
        else mp['b']++;
    }
    if(mp.size() == 1) {minus; return;}
    if(mp['a'] == mp['b']) {cout<<0<<nl; return;}

    vector<int> a,b;
    string t="";
    t+=s[0];
    for(int i=1; i<n; i++)
    {
        if(s[i] == t.back()) t += s[i];
        else
        {
            cout<<t<<nl;
            if(s[i] == 'a') b.pb(t.size());
            else a.pb(t.size());
            
            t=s[i];
        }
    }
    // if(t.back() == 'a') a.pb(t.size());
    // else b.pb(t.size());
    // for(auto u:a) cout<<u<<' ';cout<<nl;
    // for(auto u:b) cout<<u<<' ';cout<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //