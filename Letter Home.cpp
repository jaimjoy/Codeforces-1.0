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
    int n,s;cin>>n>>s;
    vi v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    if(n == 1) cout<<abs(s-v[0])<<endl;
    else if(v[0]<s && v[n-1]<s) cout<<s-v[0]<<endl;
    else if(v[0]>s && v[n-1]>s) cout<<v[n-1]-s<<endl;
    else
    {
       int mn = min(v[n-1]-s, s-v[0]);
       cout<<mn+(v[n-1]-v[0])<<endl;
    }
}

int main()
{
    optimize();
    int tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
