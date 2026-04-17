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
    map<int,int> mp;
    vector<pair<int,int>> vp;
    vector<int> pre(2*n+1, 0);
    for(int i=0; i<n; i++)
    {
        int l,r;cin>>l>>r;
        vp.pb({l,r});
        if(l == r)
        {
            mp[l]++;
            pre[l] = 1;
        }
    }
    for(int i=1; i<=2*n; i++)
    {
        pre[i] = pre[i-1]+pre[i];
    }

    for(int i=0; i<vp.size(); i++)
    {
        int l = vp[i].ff;
        int r = vp[i].ss;
        if(l == r)
        {
            if(mp[l] > 1) cout<<0;
            else cout<<1;
        }
        else
        {
            int a = r-l+1;
            int b = pre[r]-pre[l-1];
            if(a == b) cout<<0;
            else cout<<1;
        }
    }
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