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
#define lcm(a,b) (a*b)/gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    vector<pair<int,int>> vp;
    for(int i=0; i<n; i++) cin>>v[i], vp.pb({v[i],i+1}), mp[v[i]]++;
    for(auto u:mp) if(u.ss == 1) {cout<<-1<<endl; return;}

    for(int i=0; i<sz(vp)-1; i++)
    {
        if(vp[i].ff == vp[i+1].ff) swap(vp[i].ss, vp[i+1].ss);
        cout<<vp[i].ss<<" ";
    }
    cout<<vp[sz(vp)-1].ss<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
