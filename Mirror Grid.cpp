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
#define lcm(a,b) (a*b)/gcd(a,b)
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n;cin>>n;
    int grid[n][n];
    for(int i=0; i<n; i++) 
    {
        for(int j=0; j<n; j++)
        {
            char c;cin>>c;
            grid[i][j] = c-'0';
        }
    }

    int ans=0;
    for(int i=0; i<n/2; i++) 
    {
        for(int j=i; j<n-i-1; j++)
        {
            int a = grid[i][j];
            int b = grid[j][n-i-1];
            int c = grid[n-i-1][n-j-1];
            int d = grid[n-j-1][i];
            int ones = a+b+c+d;
            ans += min(ones, 4-ones);
        }
    }
    cout<<ans<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //