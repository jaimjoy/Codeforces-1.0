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
/*_________________________________________________________________________________________________________*/

int n, x, coin[1000005], dp[1000005];

int calc(int x)
{
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;

    if(dp[x] != -1) return dp[x];

    int res=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(x-coin[i] >= 0)
        {
            int returns = calc(x-coin[i]);
            if(returns != INT_MAX) res = min(res, returns+1);
        }
    }
    return dp[x] = res;
}

void solve()
{
    cin>>n>>x;
    for(int i=0; i<n; i++) cin>>coin[i];
    memset(dp, -1, sizeof dp);

    int f = calc(x);
    if(f == INT_MAX) cout<<-1;
    else cout<<f;
}

int main()
{
    optimize();
    solve();
    return 0;
}
//            Alhamdulillah                //
