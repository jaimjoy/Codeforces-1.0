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
    int l,r;cin>>l>>r;
    if(l == r) {cout<<l<<endl; return;}
    if(r == 10) {cout<<r<<endl; return;}

    int ans, mn=1e7, mx=-1, diff=-1;
    for(int i=r; i>=l; i--)
    {
        int t=i;
        while(t!=0)
        {
            mn = min(mn, t%10);
            mx = max(mx, t%10);
            t/=10;
        }
        if(mx-mn > diff)
        {
            diff = mx-mn;
            ans = i;
        }
        if(diff == 9) {cout<<ans<<endl; return;}//Powerful Line
        mn=1e7;
        mx=-1;
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
