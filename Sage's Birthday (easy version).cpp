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
    vi v(n);
    for(auto &u:v) cin>>u;
    sort(all(v));
    if(n<=2) {cout<<0<<endl; for(auto u:v) cout<<u<<" "; return;};

    int cnt=0, d=0;
    for(int i=0; i<n; i++) if(i>0 && i%2 == 0) cnt++;
    cout<<cnt<<endl;

    int even=1;
    cnt=0;
    for(int i=n-1; i>=0;)
    {
        if(even%2 == 0) cout<<v[cnt]<<" ", cnt++;
        else cout<<v[i]<<" ",i--;
        even++;
        if(even-1 == n) break;
    }
}
int main()
{
    optimize();
    solve();
    /*int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();*/

    return 0;
}
//            Alhamdulillah                //
