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
    ll n,k,q,cons=0;cin>>n>>k>>q;
    vl v(n);
    map<ll,ll> mp;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++)
    {
        if(v[i] <= q) cons++;
        else
        {
            if(cons >= k) mp[cons]++;
            cons=0;
        }
        if(i == n-1 && cons >= k) mp[cons]++;
    }
    ll ans=0;
    for(auto u:mp)
    {
        ans += ((u.ff-k+1)*(u.ff-k+2)/2) * u.ss;
        //Sub-Segments of atleast k length is ((n-k+1)*(n-k+2)) / 2
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
