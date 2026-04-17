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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    int n;cin>>n;
    vl v(n+1,0);
    for(int i=1; i<=n; i++) cin>>v[i];

    vl ans(n+1, 1);
    for(int i=2; i<=n; i++)
    {
        int diff = v[i]-v[i-1];
        if(diff == i) ans[i] = i;
        else ans[i] = ans[i-diff];
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<' '; 
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
