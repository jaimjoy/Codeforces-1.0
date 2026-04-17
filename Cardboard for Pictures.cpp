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

bool check(vector<ll> &v, ll mid, ll c)
{
    ll sum=0;
    for(int i=0; i<v.size(); i++)
    {
        sum += (v[i]+2*mid) * (v[i]+2*mid);
        if(sum > c) break;
    }
    if(sum <= c) return true;
    return false;
}
void solve()
{
    ll n,c;cin>>n>>c;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll l=1, r=1e9;
    while(l<r)
    {
        ll mid = l+(r-l)/2;
        if(check(v, mid, c)) l = mid+1;
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