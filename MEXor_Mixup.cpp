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

void solve()
{
    int a,b;cin>>a>>b;
    
    int xorr=-1;
    if((a-1)%4 == 0) xorr = a-1;
    else if((a-1)%4 == 1) xorr = 1;
    else if((a-1)%4 == 2) xorr = a;
    else xorr = 0;

    if(xorr == b) cout<<a<<nl;
    else if((xorr^b) != a) cout<<a+1<<nl;
    else cout<<a+2<<nl;
}

int main()
{
    optimize();
    ll tc;cin>>tc;
    for(int i=1; i<=tc; i++) solve();
    return 0;
}
//         Alhamdulillah         //
