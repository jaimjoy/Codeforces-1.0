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
    int n,m;cin>>n>>m;
    vector<set<int>> vs(n+1);
    vi v;
    map<int,int> mp;
    stack<int> st;
    for(int i=1; i<=n; i++)
    {
        int mn = 1e6;
        for(int j=1,a; j<=m; j++)
        {
            cin>>a;
            vs[i].insert(a);
            mn = min(mn, a);
        }
        v.pb(mn);
        mp[mn] = i;
    }
    sort(all(vs));
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(!st.empty() && st.top() > *vs[j].begin()) {cout<<-1<<endl; return;}
            else st.push(*vs[j].begin());

            vs[j].erase(vs[j].begin());
        }
    }
    sort(all(v));
    for(int i=0; i<sz(v); i++) cout<<mp[v[i]]<<" ";
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
