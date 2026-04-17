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
    int n,k;cin>>n>>k;
    vl v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    for(int i=0; i<n; i++)
    {
        // let v[i] = 13, k = 5
        // P = 13%(1+5)
        //   = 1 (need 1 so that divisible by (1+K))
        //(13-P)+P+(P*K) = required value to get common gcd....
        //(13-P) gives multiple of (1+K) that is common....
        //so, do modulo by (1+K)....

        ll p = v[i]%(k+1);
        v[i] += p*k;
    }
    for(auto u:v) cout<<u<<' ';
    cout<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
