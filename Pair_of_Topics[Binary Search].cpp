//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree < T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
    vi a(n), b(n), c(n), d(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++)
    {
        c[i] = a[i]-b[i];
        d[i] = b[i]-a[i];
    }
    
    sort(all(c));
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ans += n - (upper_bound(all(c), d[i]) - c.begin());
    }
    for(int i=0; i<n; i++)
    {
        if(a[i] > b[i]) ans--;
    }
    cout<<ans/2<<nl;
}

int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();*/
    return 0;
}
//         Alhamdulillah         //
