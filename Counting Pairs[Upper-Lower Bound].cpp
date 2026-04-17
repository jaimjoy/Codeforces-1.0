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
// Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code // Main Code //

void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    vl v(n);
    ll sum=0;
    fri(0,n) cin>>v[i],sum+=v[i];
    sort(all(v));
    ll ans=0;

    // Ahh here's a new way, this looks tasty though...
    // Noiceyyy ))
    fri(0,n)
    {
        auto l = lower_bound(v.begin()+i+1, v.end(), sum-y-v[i])-v.begin();
        auto h = upper_bound(v.begin()+i+1, v.end(), sum-x-v[i])-v.begin();
        ans += h-l;
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
