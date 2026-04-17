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
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n;cin>>n;
    vi v(n), vv(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++) cin>>vv[i];
    for(int i=0; i<n; i++) mp[v[i]] = vv[i];
    sort(all(v));
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
    for(int i=0; i<n; i++) cout<<mp[v[i]]<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
