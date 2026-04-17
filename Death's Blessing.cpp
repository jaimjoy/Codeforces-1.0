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
    vl a(n), b(n);
    for(auto &u:a) cin>>u;
    for(auto &u:b) cin>>u;

    ll ans=0;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]+b[i]+a[i+1] < a[i]+b[i+1]+a[i+1])
        {
            ans += a[i];
            a[i+1] += b[i];
        }
        else
        {
            ans += a[i+1];
            a[i] += b[i+1];
            swap(a[i],a[i+1]);
            swap(b[i],b[i+1]);
        }
    }
    cout<<ans+a[n-1]<<endl;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
