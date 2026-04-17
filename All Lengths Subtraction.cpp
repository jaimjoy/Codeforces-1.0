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
    vi v(n);
    int mx=-1, c=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] > mx) mx=v[i], c=i;
    }
    v[c]--;

    for(int y=2; y<=n; y++)
    {
        bool check=0;
        int f=y;
        int s=0;
        while(f<=n)
        {
            int r=s;
            set<int> st;
            while(r<f)
            {
                st.insert(v[r++]);
            }
            if(st.size() == 1)
            {
                for(int u=s; u<r; u++) v[u]--;
                check=1;
            }
            s++;
            f++;
            if(st.size() == 1) break;
        }
        if(!check) {NO; return;}
    }
    YES;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
