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

int nCr(int n, int r)
{
    if(r > n) return 0;
    if(r == n || r == 0) return 1;

    return nCr(n-1, r-1) + nCr(n-1, r);
}
void solve()
{
    int n;cin>>n;
    for(int hudai, i=0; i<n; i++) cin>>hudai;
    cout<<nCr(10-n, 2) * nCr(4, 2)<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
