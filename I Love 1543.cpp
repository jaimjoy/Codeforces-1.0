//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef vector<vector<ll>> vvll;
typedef pair<int,int> pii;
typedef pair<dl,dl> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define endl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
#define frri(a,b) for(int i=a; i<=b; i++)
#define frrj(a,b) for(int j=a; j<=b; j++)

const int inf = 2e9;
const ll infLL = 9e18;
const double eps = 1e-9;
const double PI = acos(-1);

#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
//#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a)*(a))
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }
ll powCalc(ll n, ll x){ll res=1; n%=MOD; while(x>0){if(x%2==1)res=res*n%MOD; n=n*n%MOD; x/=2;}return res;}

/*_________________________________________________________________________________________________________*/

void solve()
{
    int n,m;cin>>n>>m;
    char mat[n+1][m+1];
    fri(1,n+1) frj(1,m+1) cin>>mat[i][j];
    int x1 = 1,x2 = n,y1 = 1,y2 = m;
    int res=0;
    while(x1<x2 && y1<y2)
    {
        vector<char> v;
        for(int i=y1; i<=y2; i++) v.pb(mat[x1][i]);
        x1++;
        for(int i=x1; i<=x2; i++) v.pb(mat[i][y2]);
        y2--;
        for(int i=y2; i>=y1; i--) v.pb(mat[x2][i]);
        x2--;
        for(int i=x2; i>=x1; i--) v.pb(mat[i][y1]);
        y1++;

        if(sz(v) >= 4)
        {
            v.pb(v[0]);
            v.pb(v[1]);
            v.pb(v[2]);
        }
        for(int i=0; i<sz(v); i++)
        {
            if(i+3<sz(v) && v[i] == '1' &&  v[i+1] == '5' &&  v[i+2] == '4' && v[i+3] == '3')
            {
                res++;
                i+=3;
            }
        }
    }
    cout<<res<<endl;
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
