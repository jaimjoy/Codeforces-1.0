//                                By the name of Allah                           //
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define ff first
#define ss second
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(b).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
#define frie(a,b) for(int i=a; i<=b; i++)
#define frje(a,b) for(int j=a; j<=b; j++)

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2e9;
const ll infLL = 9e18;
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
//#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a)*(a))
int lcm(int a, int b){ return ( (a/__gcd(a,b))*b ); }

//////////////////////////////Main Code/////////////////////////////////

void solve()
{
    int a,b,c;cin>>a>>b>>c;
    cout<<max({(a+b+c), (a+b)*c, (a*b)+c, (a*b*c), a*(b+c), a+(b*c)});
}

int main()
{
    optimize();
    solve();
    //int tc;cin>>tc;
    //for(int d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
