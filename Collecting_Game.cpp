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
    vector<pair<ll,int>> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].ff;
        v[i].ss = i;
    }
    sort(all(v));

    vector<ll> pre(n,0);
    pre[0] = v[0].ff;
    for(int i=1; i<n; i++) pre[i] = pre[i-1]+v[i].ff;

    stack<int> st;
    vector<int> ans(n,0);
    for(int i=0; i<n; i++)
    {
        st.push(v[i].ss);
        if(pre[i] < v[i+1].ff || i == n-1)
        {
            while(!st.empty())
            {
                ans[st.top()] = i;
                st.pop();
            }
        }
    }
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
