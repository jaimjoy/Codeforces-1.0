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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    vl f(n+1);
    for(int i=1; i<=n; i++) cin>>f[i];

    vector<int> ans(n+1, 0);
    for(int i=2; i<n; i++)
    {
        ans[i] = ((f[i+1]-f[i]) - (f[i]-f[i-1]))/2;
    }

    ans[1] = f[n];
    // ans[1] theke (2 to n-1) values baad dicchi
    // karon last value already zero
    for(int i=2; i<n; i++) 
    {
        ans[1] -= ans[i] * (n-i);
    }
    ans[1] /= (n-1);
    
    ans[n] = f[1];
    // ans[n] theke (2 to n-1) values baad dicchi
    // karon first value already zero
    for(int i=2; i<n; i++)
    {
        ans[n] -= ans[i] * (i-1);
    }
    ans[n] /= (n-1);

    for(int i=1; i<=n; i++) cout<<ans[i]<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //