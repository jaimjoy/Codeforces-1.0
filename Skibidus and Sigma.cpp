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
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n,m;cin>>n>>m;
    vector<vector<ll>> v(n+1);
    priority_queue<pair<ll,ll>> p;
    for(int i=0; i<n; i++)
    {
        ll sum=0;
        for(int j=0; j<m; j++)
        {
            int num;cin>>num;
            v[i].pb(num);
            sum+=num;
        }
        p.push({sum,i});
    }

    ll ans = 0, key = n*m;
    while(!p.empty())
    {
        int ind = p.top().ss;
        for(int j=0; j<m; j++)
        {
            ans += key*(v[ind][j]);
            key--;
        }
        p.pop();
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
