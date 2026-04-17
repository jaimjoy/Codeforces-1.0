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
    int n;cin>>n;
    vl v(n);
    map<ll,ll> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]]++;
    sort(all(v));
    ll toCompare = v[0];
    if(mp[toCompare] > 1) {YES; return;}

    ll g=0;
    for(int i=1; i<n; i++)
    {
        if(v[i]%toCompare == 0) g = gcd(g, v[i]);
        if(g == toCompare) {YES; return;}
    }
    NO;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
