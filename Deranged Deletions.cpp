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
    vi v(n), vv(n);
    for(int i=0; i<n; i++) cin>>v[i];
    vv = v;
    sort(all(vv));
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(vv[i] == v[i]) v[i] = 0, cnt++;
    }
    if(cnt == n) {NO; return;}
    YES;
    cout<<n-cnt<<endl;
    for(int i=0; i<n; i++)
    {
        if(v[i] > 0) cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//            Alhamdulillah                //
