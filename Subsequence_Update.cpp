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

void solve()
{
    int n,l,r;cin>>n>>l>>r;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vi left, right;
    for(int i=0; i<r; i++) left.pb(v[i]);
    for(int i=l-1; i<n; i++) right.pb(v[i]);
    sort(all(left));
    sort(all(right));
    ll ans=0, ans2=0;
    for(int i=0; i<(r-l+1); i++) ans += left[i];
    for(int i=0; i<(r-l+1); i++) ans2 += right[i];
    cout<<min(ans,ans2)<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
