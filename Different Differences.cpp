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
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int k,n;cin>>k>>n;
    map<int,int> mp;
    int a=1;
    vi v;
    v.pb(1);
    for(int i=1; i<=n; i++)
    {
        if(i+a <= n && sz(v) < k-1) v.pb(i+a), a += i, mp[a]++;
    }
    k -= sz(v);
    while(k > 0)
    {
        if(mp[n] == 0) v.pb(n), k--;
        n--;
    }
    sort(all(v));
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
