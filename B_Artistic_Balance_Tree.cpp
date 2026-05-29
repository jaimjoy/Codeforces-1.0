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
#define eb emplace_back
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define minus cout<<"-1\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll gcd(ll a, ll b) {return b ? gcd(b, a%b):a;}
ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}
#define cin(a) for(auto &x:a) cin>>x;
string decToBin(ll n){string s="";while(n>0){s=to_string(n%2)+s;n/=2;}return s;}

void solve()
{
    int n,m;cin>>n>>m;
    vi x(m);
    vector<int> odd, even;
    ll sum=0;
    for(int a,i=1; i<=n; i++) 
    {
        cin>>a;
        sum += a;
        if(i&1) odd.pb(a);
        else even.pb(a);
    }
    for(int i=0; i<m; i++) cin>>x[i];

    sort(all(odd));
    sort(all(even));
    ll baad=0;
    bool oddB=0, evenB=0;
    for(int i=0; i<m; i++)
    {
        if(x[i]&1)
        {
            if(odd.back() >= 0 && odd.size() > 0) 
            {
                baad += odd.back();
                odd.pop_back();
                oddB=1;
            }
            else if(!oddB && odd.size() > 0) 
            {
                baad += *odd.rbegin();
                oddB=1;
            }
        }
        else 
        {
            if(even.back() >= 0 && even.size() > 0) 
            {
                baad += even.back();
                even.pop_back();
                evenB=1;
            }
            else if(!evenB && even.size() > 0) 
            {
                baad += *even.rbegin();
                evenB=1;
            }
        }
    }
    cout<<sum - baad<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
