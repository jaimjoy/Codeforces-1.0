//  In the name of Almighty Allah
//     One day I'll be no more,
//        but my code will !
#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree < T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset = tree < T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ook order_of_key
#define fbo find_by_order

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

int cmp(pair<int,int> &p1, pair<int,int> &p2)
{
    if(p1.ff < p2.ff) return 1;
    else if(p1.ff == p2.ff && p1.ss < p2.ss) return 1;
    else return 0;
}
void solve()
{
    int n;cin>>n;
    vi v(n);
    map<int,int> mp;
    for(int i=0; i<n; i++) cin>>v[i], mp[v[i]]++;
    vector<pair<int,int>> vp;
    for(auto u:mp) vp.pb({u.ss, u.ff});
    sort(allr(vp));

    ll alice=0, bob=0,f=0;
    for(int i=0; i<vp.size(); i++)
    {
        ll val = vp[i].ss;
        ll occu = vp[i].ff;
        alice += occu*(val/2);
        bob += occu*(val/2);
        if(val&1)
        {
            if(f == 0) alice += occu, f=1; 
            else bob += occu, f=0;
        }
    }
    cout<<alice<<" "<<bob<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
