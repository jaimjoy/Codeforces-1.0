//  In the name of Almighty Allah

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define nl '\n'
#define ff first
#define ss second
#define pb push_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)
string decToBin(ll n){string s="";ll i=0;while(n>0){s=to_string(n%2)+s;n/=2;i++;}return s;}

void solve()
{
    int n;cin>>n;
    vi a(n),b(n),c(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    for(int i=0; i<n; i++) cin>>c[i];

    ll ab=0, bc=0;
    //ab
    for(int i=0; i<n; i++)
    {
        bool f=0;
        for(int j=0; j<n; j++)
        {
            if(a[j] >= b[(i+j)%n])
            {
                f=1;
                break;
            }
        }
        if(!f) ab++;
    }
    //bc
    for(int i=0; i<n; i++)
    {
        bool f=0;
        for(int j=0; j<n; j++)
        {
            if(b[j] >= c[(i+j)%n])
            {
                f=1;
                break;
            }
        }
        if(!f) bc++;
    }
    cout<<n * ab * bc<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    //solve();
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //