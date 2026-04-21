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
    string s;cin>>s;
    int l=-1, r=s.size()-1;
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1]) {l=i+1; break;}
    }
    for(int i=s.size()-1; i>l; i--)
    {
        if(s[i] == s[i-1]) {r=i-1; break;}
    }
    if(l == r) {YES; return;}

    string a="";
    for(int i=l; i<=r; i++) a += s[i];
    
    bool f=0;
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i] == a[i+1]) {f=1; break;}
    }
    if(f) {NO; return;}
    else YES;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
