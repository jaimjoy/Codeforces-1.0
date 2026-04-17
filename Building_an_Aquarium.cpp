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

bool check(ll mid, vector<int>& v, int x)
{
    ll unit=0;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] < mid) unit += mid-v[i];
    }
    return unit<=x;
}
void solve()
{
    int n,x;cin>>n>>x;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll l=1, r=1e10, ans=-1;
    while(l<r)
    {
        ll mid = (l+r)/2;
        if(check(mid, v, x)) l = mid+1;
        else r = mid;
    }
    cout<<l-1<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
