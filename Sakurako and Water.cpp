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
    int n;cin>>n;
    int ar[n][n];
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>ar[i][j];
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        int j=0, k=i;//j = row, which is fixed
        int mn = 1e6;
        while(k<n)
        {
            mn = min(mn, ar[j][k]);
            j++;k++;
        }
        if(mn < 0) ans -= mn;
    }
    for(int j=1; j<n; j++)
    {
        int k=j, l=0;// k = column, which is fixed
        int mn = 1e6;
        while(k<n)
        {
            mn = min(mn, ar[k][l]);
            k++;l++;
        }
        if(mn < 0) ans -= mn;
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
