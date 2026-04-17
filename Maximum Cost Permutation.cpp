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

void solve()
{
    int n;cin>>n;
    vi v(n+1);
    set<int> st;
    map<int,int> mp;
    for(int i=1; i<=n; i++) cin>>v[i], mp[v[i]]++;

    for(int i=1; i<=n; i++)
    {
        if(mp[i] == 0) st.insert(i);
    }
    
    for(int i=1; i<=n; i++)
    {
        if(v[i] == 0)
        {
            v[i] = *--st.end();
            st.erase(*--st.end());
        }
    }

    ll ans=0, temp=0;
    for(int i=1; i<=n; i++)
    {
        if(i != v[i]) ans += 1+temp, temp=0;
        else if(i == v[i] && ans > 0) temp++;
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
