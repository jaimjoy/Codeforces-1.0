//                                   In the name of ALLAH                            //
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
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)

const int inf = 2e9;
const ll infLL = 9e18;
const double eps = 1e-9;
const double PI = acos(-1);

#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a))

#define Bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a)*(a))
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }
ll powCalc(ll n, ll x){ll res=1; n%=MOD; while(x>0){if(x%2==1)res=res*n%MOD; n=n*n%MOD; x/=2;}return res;}

/*___________________________________________________________________________________________________________*/
/* */
void solve()
{
    int n;cin>>n;
    vi v(n);
    map<int, int> m;
    int mxfreq = 0;
    for(auto &u:v)
    {
        cin>>u;
        m[u]++;
        mxfreq = max(mxfreq, m[u]);
    }
    int ans = 0;
    while(mxfreq < n)
    {
        int remain = n-mxfreq;
        int add = mxfreq;
        ans++;
        ans += min(remain, add);
        mxfreq += min(remain, add);
    }
    cout<<ans<<endl;
}

int main()
{
    Bismillah;
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
