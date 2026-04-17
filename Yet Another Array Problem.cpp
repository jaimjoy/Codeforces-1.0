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

vector<ll> mprime;
void sieve(int n)
{
    vector<bool> primes(n+1, true);
    primes[0]=false;
    primes[1]=false;
    for(int i=2; i<=n; i++)
    {
        if(primes[i])
        {
            mprime.pb(i);
            for(int j=i*i; j<=n; j+=i) primes[j] = false;
        }
    }
}
void solve()
{
    int n;cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll ans=200;
    for(int i=0; i<n; i++)
    {
        ll k = v[i];
        for(int j=0; j<mprime.size(); j++)
        {
            ll g = gcd(k, mprime[j]);
            if(g == 1) ans = min(ans, mprime[j]);
        }
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    sieve(100);
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
