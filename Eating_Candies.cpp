//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll l=0, r=n-1;
    ll a=0, b=0, ans=LLONG_MIN;
    while(l<=r)
    {
        if(a <= b) a += v[l++];
        else b += v[r--];

        if(a == b) ans = max(ans, l+n-1-r);
    }
    if(ans == LLONG_MIN) cout<<0<<nl;
    else cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
