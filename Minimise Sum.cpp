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
#define yes {cout<<"Yes"<<endl;}
#define no  {cout<<"No"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vl v(n), nv;
    ll mn = LLONG_MAX;
    for(int i=0; i<n; i++) cin>>v[i], mn = min(mn, v[i]);
    if(n == 2)
    {
        cout<<min(v[0]+v[1], v[0]+min(v[0], v[1]))<<endl;
        return;
    }

    ll ans = v[0];
    mn = v[0];
    for(int i=1; i<n-1; i++)
    {
        mn = min(mn, v[i]);
        ans += min(mn, v[i]+v[i+1]);
        nv.pb(ans);
    }
    sort(all(nv));
    cout<<nv[0]<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
