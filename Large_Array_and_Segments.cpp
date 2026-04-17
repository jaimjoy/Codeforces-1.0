//                                In the name of Allah                           //
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
/*_________________________________________________________________________________________________________*/

int isOK(int mid, ll sum, ll x)
{
    ll a = mid*sum;
    if(a < x) return 0;
    return 1;
}
void solve()
{
    ll n,k,x;cin>>n>>k>>x;
    vl v(n);
    ll sum=0;
    for(int i=0; i<n; i++) cin>>v[i], sum+=v[i];
    ll l=0, r=k;
    while(l<r)
    {
        int mid = (l+r)/2;
        if(isOK(mid,sum,x) == 0) l = mid + 1;
        else r = mid;
    }
    if(l == 0) {cout<<0<<nl; return;}

    ll total = (l-1)*sum;
    ll ans = (l-1)*n;
    for(int i=n-1; i>-1; i--)
    {
        total += v[i];
        if(total >= x) break;
        else ans++;
    }
    cout<<n*k-ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
