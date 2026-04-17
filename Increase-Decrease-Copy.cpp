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
#define fri(a,b) for(int i=a; i<b; i++)
#define frj(a,b) for(int j=a; j<b; j++)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    vi v(n),vv(n+1);
    for(auto &u:v) cin>>u;
    for(auto &u:vv) cin>>u;
    int last = vv.back();
    vv.pop_back();

    ll ans=0;
    bool f=0;
    for(int i=0; i<n; i++)
    {
        ans+=abs(v[i]-vv[i]);
        if((v[i]<=last && vv[i]>=last) ||(vv[i]<=last && v[i]>=last)) f=1;
    }
    if(f) {cout<<ans+1<<endl; return;}

    ll mn = 0, diff = 1e18;//This one LongLong 1e18 changes everything
    for(int i=0; i<n; i++) if(abs(v[i]-last) < diff) diff=abs(v[i]-last), mn=v[i];
    for(int i=0; i<n; i++) if(abs(vv[i]-last) < diff) diff=abs(vv[i]-last), mn=vv[i];
    cout<<ans+abs(last-mn)+1<<endl;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
