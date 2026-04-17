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

void solve()
{
    int n;cin>>n;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    ll mn = v[0];

    ll ans = -1;
    int l=1, r=v[1];
    while(l<r)
    {
        ll mid = (l+r)/2;
        if(mid >= v[0] && v[1]-mid >= v[0])
        {
            l = mid+1;
            ans = mid;
        }
        else r = mid;
    }
    if(ans == -1) cout<<mn<<nl;
    else cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
