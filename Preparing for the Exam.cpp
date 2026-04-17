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
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    int n,m,k;cin>>n>>m>>k;
    vi v(m),vv(k);
    map<int,int> mp;
    for(auto &u:v) cin>>u;
    for(auto &u:vv) cin>>u, mp[u]++;

    if(n==k) for(int i=0; i<m; i++) cout<<1;
    else if(n-1>k) for(int i=0; i<m; i++) cout<<0;
    else
    {
        for(int i=0; i<m; i++)
        {
            if(mp[v[i]] == 0) cout<<1;
            else cout<<0;
        }
    }
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
