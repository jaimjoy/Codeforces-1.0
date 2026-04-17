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
    int n,q;cin>>n>>q;
    vi v(n), suf;
    for(int i=0; i<n; i++) cin>>v[i];
    sort(allr(v));

    suf.pb(v[0]);
    for(int i=1; i<n; i++)
    {
        v[i] += v[i-1];
        suf.pb(v[i]);
    }

    while(q--)
    {
        int x;cin>>x;
        int ans = upper_bound(all(suf), x) - suf.begin();
        if(x > suf[sz(suf)-1]) cout<<-1<<nl;
        else if(suf[ans-1]== x) cout<<ans<<nl;
        else cout<<ans+1<<nl;//0 based index that's why +1
    }
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
