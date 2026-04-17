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

int getRange(ll vec, int l1, int r1, int l2, int r2)
{
    int mn = l2/vec, mx = r2/vec;
    if(l2%vec != 0) mn++;

    int mnRange = max(l1, mn); // 2...6
    int mxRange = min(r1, mx); // 2...12

    return max(0, mxRange-mnRange+1);
}
void solve()
{
    int k,l1,r1,l2,r2;cin>>k>>l1>>r1>>l2>>r2;
    vl v;
    ll pow = 1;
    while(pow <= r2) // y = x*k^n(n = 1...r2)
    {
        v.pb(pow);
        pow *= k;
    }
    int ans=0;
    for(int i=0; i<sz(v); i++)
    {
        ans += (getRange(v[i], l1, r1, l2, r2));
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
