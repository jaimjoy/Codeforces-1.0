//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
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
/*_________________________________________________________________________________________________________*/

void solve()
{
    ll n;cin>>n;
    vector<ll> v(n+5), pre(n+5);
    for(int i=1; i<=n; i++) cin>>v[i];

    ll segment=1;
    pre[1] = 1;
    for(int i=2; i<=n; i++)
    {
        if(v[i-1] == v[i]) segment++;
        else segment=1;
        pre[i] = segment;
    }
    ll ans=LLONG_MAX;
    for(int i=1; i<=n; i++)
    {
        ll calc = v[i]*(n - pre[i]);
        ans = min(ans, calc);
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
