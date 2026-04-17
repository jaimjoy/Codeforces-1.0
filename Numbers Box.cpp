//                                In the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define endl '\n'
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
#define lcm(a,b) (a*b)/gcd(a,b)
/*_________________________________________________________________________________________________________*/
int dx[] = {0,0,1,-1};
int dy[] = {-1,1,0,0};

void solve()
{
    int n,m;cin>>n>>m;
    int grid[n][m];
    int sum=0;
    int mn=1e9;
    int neg=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
            if(grid[i][j] < 0) neg++;
            sum += abs(grid[i][j]);
            mn = min(mn, abs(grid[i][j]));
        }
    }
    if(neg%2 == 0) cout<<sum<<endl;
    else cout<<sum-2*mn<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
