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
    int n,m;cin>>n>>m;
    int v[n][m];
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            mp[v[i][j]] = 1;
        }
    }
    //Left Adjacent Checking
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            if(v[i][j] == v[i][j-1]) mp[v[i][j]] = 2;
        }
    }
    //Top Adjacent Checking
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i][j] == v[i-1][j]) mp[v[i][j]] = 2;
        }
    }

    int allfreq=0, mxfreq=0;
    for(auto u:mp)
    {
        allfreq += u.ss;
        mxfreq = max(mxfreq, u.ss);
    }
    cout<<allfreq-mxfreq<<endl;

    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<mp[v[i][j]]<<" ";
        }
        cout<<endl;
    }*/
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
