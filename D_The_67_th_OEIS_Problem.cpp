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
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

vector<ll> primes;

void solve()
{
    int n;cin>>n;
    vector<ll> ans;
    for(int i=0; i<n; i++)
    {
        if(i == 0) ans.pb(primes[i]);
        else ans.pb(primes[i]*primes[i-1]);
    }

    // cout<<ans.size()<<nl;return;
    for(auto u:ans) cout<<u<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    for(ll i=1; i<=1000000; i++)
    {
        bool f=0;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j == 0) {f=1; break;}
        }
        if(!f) primes.pb(i);
    }
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //