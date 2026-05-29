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
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n;cin>>n;
    
    vector<int> ans(32);
    ll total = pow(2,31);
    ans[31] = 1;
    for(int i=30; i>=0; i--)
    {
        ll baad = pow(2,i);
        if(total >= n) 
        {
            ans[i] = -1;
            total-=baad;
        }
        else
        {
            ans[i] = 1;
            total += baad;
        }
    }
    
    if(total == n-1)
    {
        if(ans[0] == -1) ans[0]=0, total++;
    }
    if(total != n) {NO; return;}

    YES;
    for(int i=0; i<32; i++)
    {
        cout<<ans[i]<<' ';
        if((i+1)%8 == 0) cout<<nl;
    }
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //

