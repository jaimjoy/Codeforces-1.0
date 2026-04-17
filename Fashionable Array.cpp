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
#define allr(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
/*_________________________________________________________________________________________________________*/

void solve()
{
    int n;cin>>n;
    vi v(n);
    for(auto &u:v) cin>>u;
    if(n == 1) {cout<<0<<endl; return;}
    sort(all(v));
    int ans=n, cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[n-1]%2)
        {
            if(v[i]%2) {ans = min(ans,cnt); cnt=0; break;}
            else cnt++;
        }
        else
        {
            if(v[i]%2 == 0) {ans = min(ans,cnt); cnt=0; break;}
            else cnt++;
        }
    }
    for(int i=n-1; i>0; i--)
    {
        if(v[0]%2)
        {
            if(v[i]%2) {ans = min(ans,cnt); cnt=0; break;}
            else cnt++;
        }
        else
        {
            if(v[i]%2 == 0) {ans = min(ans,cnt); cnt=0; break;}
            else cnt++;
        }
    }
    if(ans == n) cout<<1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
