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
// Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here // // Code Here

void solve()
{
    int n;cin>>n;
    vi v(n), vis;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;

    }
    for(auto u:mp) if(u.ss > 1) vis.pb(u.ff);
    if(sz(vis) < 2) {cout<<-1<<endl; return;}

    for(int i=0; i<n; i++)
    {
        if(v[i] == vis[0]) cout<<2<<" ", vis[0] = -1;
        else if(v[i] == vis[1]) cout<<3<<" ", vis[1] = -1;
        else cout<<1<<" ";
    }
    cout<<endl;
}

int main()
{
    optimize();
    ll t;cin>>t;
    for(ll d=1; d<=t; d++) solve();

    return 0;
}
//            Alhamdulillah                //
