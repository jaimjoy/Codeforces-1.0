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
    int n;cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    set<int> st;
    vector<vector<int>> vp(n+1);
    for(int i=0; i<n; i++)
    {
        vp[v[i]].pb(i);
        st.insert(v[i]);
    }

    int k=1;
    while(!st.empty())
    {
        int cnt=0;
        int ind = *st.begin();
        //base condition: not a miltiple
        if(vp[ind].size()%ind != 0) {minus; return;}

        for(int i=0; i<vp[ind].size(); i++)
        {
            if(cnt < ind) v[vp[ind][i]] = k;
            else cnt=0, k++, v[vp[ind][i]] = k;

            cnt++;
        }
        k++;
        st.erase(ind);
    }
    for(auto u:v) cout<<u<<' '; 
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
