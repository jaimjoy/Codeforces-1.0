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
    int n;cin>>n;
    vi a(n), b(n);
    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    if(n == 1 && a[0]<b[0])
    {
        cout<<0<<endl;
        return;
    }

    for(int k=0; k<n-1; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1]) swap(a[i], a[i+1]), v.pb({1,i+1});
        }
    }

    for(int k=0; k<n-1; k++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(b[i]>b[i+1]) swap(b[i], b[i+1]), v.pb({2,i+1});
        }
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i]) swap(a[i], b[i]), v.pb({3,i+1});
    }

    cout<<sz(v)<<endl;
    for(auto u:v) cout<<u.ff<<" "<<u.ss<<endl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll d=1; d<=tc; d++) solve();

    return 0;
}
//            Alhamdulillah                //
