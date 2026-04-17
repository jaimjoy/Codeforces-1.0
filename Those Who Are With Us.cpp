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

    int ar[n][m], row[n], col[m];
    memset(ar, 0, sizeof(ar));
    memset(row, 0, sizeof(row));
    memset(col, 0, sizeof(col));

    int mx=-1;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ar[i][j];
            mx = max(mx, ar[i][j]);
            mp[ar[i][j]]++;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(ar[i][j] == mx)
            {
                row[i]++;
                col[j]++;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int ans = row[i]+col[j];

            if(ar[i][j] == mx) ans--;

            if(mp[mx] == ans) {cout<<mx-1<<endl; return;}
        }
    }
    cout<<mx<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
