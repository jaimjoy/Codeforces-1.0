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

const int N = 1e6+5;
vector<int> found(N,0);
void solve()
{
    int n;cin>>n;
    if(found[n]) YES;
    else NO;
}

int main()
{
    optimize();
    
    for(int k=2;; k++)
    {
        // minimum depth is 3 for which n will be atleast 7
        ll total = 1+k+(k*k);
        ll x = k*k;

        if(total > 1e6) break;

        while(total <= 1e6)
        {
            found[total] = 1;
            x *= k;
            total += x;
        }
    }
    ll tc;cin>>tc;for(int i=1; i<=tc; i++)solve();
    return 0;
}
//         Alhamdulillah         //
