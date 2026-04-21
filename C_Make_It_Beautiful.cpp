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
    ll n,k;cin>>n>>k;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(all(v));
    vector<bitset<62>> bits(n);
    for(int i=0; i<n; i++) bits[i] = v[i];

    int ans=0;
    for(int b=0; b<62; b++)
    {
        for(int i=0; i<n; i++)
        {
            if(!bits[i][b])
            {
                ll need = (1LL << b);
                if(k >= need) ans++, k-=need;
            }
        }
    }
    
    for(int i=0; i<n; i++)
    {
        ans += __builtin_popcountll(v[i]);
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
