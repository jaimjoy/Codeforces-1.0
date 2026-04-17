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
    char ch[n][m];
    ll cnt=0;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>ch[i][j];
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            map<char,int> mp;

                if(ch[i][j] != 'x') mp[ch[i][j]]++;
                if(ch[i][j+1] != 'x') mp[ch[i][j+1]]++;
                if(ch[i+1][j] != 'x') mp[ch[i+1][j]]++;
                if(ch[i+1][j+1] != 'x') mp[ch[i+1][j+1]]++;

            if(mp['f'] == 1 && mp['a'] == 1 && mp['c'] == 1 && mp['e'] == 1) cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    optimize();
    solve();
    //ll tc;cin>>tc;
    //for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
