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

void solve()
{
    int a,b;cin>>a>>b;
    if(a == b) {cout<<0<<nl; return;}
    //if(a < b) {minus; return;}

    bitset<32> aa(a), bb(b);
    vl ans;
    for(int i=0; i<32; i++)
    {
        if(aa[i] != bb[i])
        {
            ll num = pow(2,i);
            ans.pb(num);
        }
    }
    if(ans[ans.size()-1] > a) {minus; return;}
    
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
