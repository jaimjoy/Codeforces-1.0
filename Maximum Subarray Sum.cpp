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
    int n;cin>>n;
    vl v(n+1), pre(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    pre[0] = 0;
    for(int i=1; i<=n; i++) pre[i] = pre[i-1]+v[i];

    ll ans = v[1];
    ll min_prefix = pre[0];
    for(int i=1; i<=n; i++)
    {
        ans = max(ans, pre[i]-min_prefix);
        min_prefix = min(min_prefix, pre[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//            Alhamdulillah                //
