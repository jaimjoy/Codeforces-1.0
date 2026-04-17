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
    int n,m;cin>>n>>m;
    char a[n][m], b[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>b[i][j];
    }

    for(int i=0; i<n; i++)
    {
        ll sumA = 0, sumB = 0;
        for(int j=0; j<m; j++) sumA += a[i][j]-'0';
        for(int j=0; j<m; j++) sumB += b[i][j]-'0';
        if(sumA%3 != sumB%3) 
        {
            NO;
            return;
        }
    }
    for(int i=0; i<m; i++)
    {
        ll sumA = 0, sumB = 0;
        for(int j=0; j<n; j++) sumA += a[j][i]-'0';
        for(int j=0; j<n; j++) sumB += b[j][i]-'0';
        if(sumA%3 != sumB%3) 
        {
            NO;
            return;
        }
    }
    YES;
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