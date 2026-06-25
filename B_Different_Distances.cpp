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
    int n;cin>>n;
    if(n == 2)
    {
        cout<<"2 1 1 2 2 1 2 1"<<nl;
        return;
    }
    if(n == 3)
    {
        cout<<"1 1 2 1 2 3 1 3 2 2 3 3"<<nl;
        return;
    }
    if(n&1)
    {
        cout<<n<<' ';
        for(int i=1; i<=n-1; i++)
        {
            cout<<i<<' '<<i<<' ';
            if(i == 1) cout<<n<<' ';
        }
        for(int i=1; i<=n-1; i+=2)
        {
            cout<<i<<' '<<i+1<<' ';
            cout<<i<<' '<<i+1<<' ';
        }
        cout<<n<<' '<<n;
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<' '<<i<<' ';
        }
        for(int i=1; i<=n; i+=2)
        {
            cout<<i<<' '<<i+1<<' ';
            cout<<i<<' '<<i+1<<' ';
        }
    }
    cout<<nl;
}

int main()
{
    optimize();
    // solve();
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
