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
    int m;cin>>m;
    vi v,ans;
    map<int,int> vis;
    for(int i=0,a; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a;
            if(vis[a] == 0) v.pb(a), vis[a] = -1, ans.pb(a);
        }
    }
    int cnt=1;
    sort(all(ans));
    for(int i=0; i<=sz(ans)+1; i++)
    {
        if(ans[i] != i+1) {cout<<i+1<<" "; break;}
    }
    for(auto u:v) cout<<u<<" ";
    cout<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
