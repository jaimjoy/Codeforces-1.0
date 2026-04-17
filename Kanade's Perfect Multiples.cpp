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
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}
 
void solve()
{
    int n,k;cin>>n>>k;
    set<int> st;
    map<int,int> mp;
    for(int a,i=0; i<n; i++)
    {
        cin>>a;
        st.insert(a);
        mp[a] = 1;
    }
 
    vi ans;
    while(!st.empty())
    {
        int val = *st.begin();
        for(int i=1; i*val <= k; i++)
        {
            if(mp[val*i] == 0) {minus; return;}
            st.erase(val*i);
        }
        ans.pb(val);
    }
 
    cout<<ans.size()<<nl;
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