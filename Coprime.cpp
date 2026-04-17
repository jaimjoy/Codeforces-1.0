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
    vi v;
    int ans=0;
    vector<int> mp(1001, 0);
    for(int a,i=1; i<=n; i++)
    {
        cin>>a;
        if(a == 1) ans = max(ans, i*2);
        if(mp[a] == 0) v.pb(a);
        mp[a]=i;
    }

    for(int i=v.size()-1; i>0; i--)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(gcd(v[i], v[j]) == 1)
            {
                ans = max(ans, mp[v[i]]+mp[v[j]]);
            }
        }
    }
    cout<<(ans == 0 ? -1:ans)<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
