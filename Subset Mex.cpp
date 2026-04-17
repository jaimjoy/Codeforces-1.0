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
    vi v(n);
    map<int, int> m;
    for(auto &u:v) cin>>u,m[u]++;
    sort(all(v));
    vi v1,v2;
    for(auto &u:m) if(u.ss>0) v1.pb(u.ff), m[u.ff]--;
    for(auto &u:m) if(u.ss>0) v2.pb(u.ff), m[u.ff]--;
    int ans=0, ans2=0;

    for(int i=0; i<sz(v1); i++)
    {
        if(v1[i] == i) {ans++;}
        else break;
    }
    ans2+=ans;
    ans=0;
    for(int i=0; i<sz(v2); i++)
    {
        if(v2[i] == i) {ans++;}
        else break;
    }
    ans2+=ans;
    cout<<ans2<<endl;
}
int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
