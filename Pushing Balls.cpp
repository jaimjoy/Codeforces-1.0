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
    char c[n][m];
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>c[i][j];
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
        {
            int cnt=0, cnt1=0, ii=i-1, jj=j-1;

            if(c[i][j] == '1')
            {
                while(jj>=0)
                {
                    if(c[i][jj] == '1') cnt++;
                    else break;
                    jj--;
                }

                while(ii>=0)
                {
                    if(c[ii][j] == '1') cnt1++;
                    else break;
                    ii--;
                }
                if(cnt == j || cnt1 == i) continue;
                else {NO; return;}
            }
        }
    }
    YES;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
