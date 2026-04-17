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
    ll a,b,c,m;cin>>a>>b>>c>>m;

    ll A=m/a, B=m/b, C=m/c;
    ll aUb = m/lcm(a,b);
    ll bUc = m/lcm(b,c);
    ll cUa = m/lcm(a,c);
    ll aUbUc = m/lcm(a,lcm(b,c));

    aUb -= aUbUc;
    bUc -= aUbUc;
    cUa -= aUbUc;
    A -= (aUb + cUa + aUbUc);
    B -= (aUb + bUc + aUbUc);
    C -= (bUc + cUa + aUbUc);

    cout<< A*6 + (aUb+cUa)*3 + aUbUc*2 <<' ';
    cout<< B*6 + (aUb+bUc)*3 + aUbUc*2 <<' ';
    cout<< C*6 + (bUc+cUa)*3 + aUbUc*2 <<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //