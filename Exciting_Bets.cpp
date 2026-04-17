//            In the name of Allah        //
/*
    One day I'll be no more,
    but my code will !
*/
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
#define sz(x) (int)x.size()
#define YES {cout<<"YES"<<endl;}
#define NO  {cout<<"NO"<<endl;}
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd(a,b)

void solve()
{
    ll a,b;cin>>a>>b;
    ll g = abs(a-b);
    if(a == b) cout<<"0 0"<<nl;
    else cout<<g<<' '<<min(a%g, g-(a%g))<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(ll i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
