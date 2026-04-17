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
    int n,m;cin>>n>>m;
    if(m < n || n > 30) {cout<<m; return;}
    ll num = 1;
    for(int i=1; i<=n; i++) num *= 2;
    cout<<m%num;
}

int main()
{
    optimize();
    solve();
    //ll tc;cin>>tc;
    //for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
