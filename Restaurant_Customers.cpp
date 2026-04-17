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

void solve()
{
    int n;cin>>n;
    set<int> s;
    vector<pair<int,int>> v;
    while(n--)
    {
        int a,b;cin>>a>>b;
        v.pb({a,b});
        s.insert(a);
        s.insert(b);
    }

    //Compressing the array
    int ind=1;
    map<int,int> mp;
    for(auto u:s)
    {
        mp[u] = ind;
        ind++;
    }

    //Updating compressed values
    for(int i=0; i<sz(v); i++)
    {
        v[i].ff = mp[v[i].ff];
        v[i].ss = mp[v[i].ss];
    }

    //Prefix
    int prefix[sz(mp)+5] = {0};
    for(int i=1; i<=sz(v); i++)
    {
        prefix[v[i-1].ff] += 1;
        prefix[v[i-1].ss] -= 1;
    }
    int ans=INT_MIN;
    for(int i=1; i<=sz(mp); i++)
    {
        prefix[i] = prefix[i] + prefix[i-1];
        ans = max(ans, prefix[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    solve();
    /*ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();*/
    return 0;
}
//            Alhamdulillah                //
