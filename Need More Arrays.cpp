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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    auto it = unique(all(v));
    v.resize(distance(v.begin(), it));
    vi vv;
    vv.pb(v[0]);
    for(int i=1; i<sz(v); i++)
    {
        if(vv.back()+1 != v[i]) vv.pb(v[i]);
    }
    int ans=1, now = vv[0];
    for(int i=1; i<sz(vv); i++)
    {
        if(now+1 < vv[i]) ans++;
        now = vv[i];
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
