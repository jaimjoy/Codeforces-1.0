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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    
    vector<pair<ll,ll>> store;
    for(int i=0; i<n; i++) store.pb({v[i], i});
    sort(allr(store));

    vector<ll> ans(n);
    ll cost=0;
    int coordinate = 1;
    for(int i=0; i<n; i++)
    {
        int ind = store[i].ss;
        cost += 2*abs(coordinate)*store[i].ff;
        if(i%2 == 0) ans[ind] = coordinate;
        else ans[ind] = -coordinate, coordinate++;
    }

    cout<<cost<<nl;
    cout<<"0 ";
    for(auto u:ans) cout<<u<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
