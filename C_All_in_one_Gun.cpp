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

void solve()
{
    int n,h,k;cin>>n>>h>>k;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll mx = *max_element(all(v));
    if(v[0] < mx)
    {
        for(int i=n-1; i>0; i--)
        {
            if(v[i] == mx) 
            {
                swap(v[0], v[i]); 
                break;
            }
        }
    }

    vl pre(n);
    pre[0] = v[0];
    for(int i=1; i<n; i++) pre[i] = pre[i-1]+v[i];
    if(pre[n-1] >= h)
    {
        int i=0, ans=0;
        while(h>0)
        {
            h -= v[i++];
            ans++;
        }
        cout<<ans<<nl;
        return;
    }

    int div = h/pre[n-1];
    h -= (div*pre[n-1]);
    int t=0;
    ll ans=(n*div) + (div*k);
    while(h > 0)
    {
        h -= v[t++];
        ans++;
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