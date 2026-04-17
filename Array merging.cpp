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
    set<int> s;
    vi a(n), b(n);
    map<int,int> mpa, mpb;
    for(int i=0; i<n; i++) cin>>a[i], s.insert(a[i]);
    for(int i=0; i<n; i++) cin>>b[i], s.insert(b[i]);

    ll ans=0;
    int cons=1;
    mpa[a[0]] = 1;
    for(int i=0; i<n-1; i++)//Longest run of each a's element
    {
        if(a[i] == a[i+1]) cons++;
        else cons=1;
        mpa[a[i+1]] = max(cons, mpa[a[i+1]]);
    }
    cons=1;
    mpb[b[0]] = 1;
    for(int i=0; i<n-1; i++)//Longest run of each b's element
    {
        if(b[i] == b[i+1]) cons++;
        else cons=1;
        mpb[b[i+1]] = max(cons, mpb[b[i+1]]);
    }
    for(auto u:s)
    {
        ans = max(ans, (ll)mpa[u] + mpb[u]);
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
